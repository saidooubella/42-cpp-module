/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:53:09 by soubella          #+#    #+#             */
/*   Updated: 2023/01/10 14:12:58 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <stddef.h>
#include <vector>

class Span {
    
    private:
        std::vector<int64_t> numbers;
        size_t               limit;

    public:
        ~Span();
        Span();
        Span(size_t size);
        Span(const Span& value);
        Span& operator =(const Span& value);
        void addNumber(int64_t value);
        uint64_t shortestSpan();
        uint64_t longestSpan();
        template<typename T>
        void addRange(T start, T end) {
            if (start > end) {
                throw IllegalArgumentException();
            }
            for (T i = start; i != end; i++) {
                addNumber(*i);
            }
        }

    class OverflowException : std::exception {
        public:
            const char* what() const throw();
    };

    class IllegalArgumentException : std::exception {
        public:
            const char* what() const throw();
    };

    class NotEnoughElementsException : std::exception {
        public:
            const char* what() const throw();
    };

};
