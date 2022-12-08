/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:53:09 by soubella          #+#    #+#             */
/*   Updated: 2022/12/07 21:10:58 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stddef.h>
#include <exception>

typedef long long int64_t;

class Span {
    
    private:
        int64_t *numbers;
        size_t  capacity;
        size_t  size;
        size_t  shortestDistance;
        size_t  longestDistance;

    public:
        ~Span();
        Span();
        Span(size_t size);
        Span(const Span& value);
        Span& operator =(const Span& value);
        void addNumber(int64_t value);
        size_t shortestSpan();
        size_t longestSpan();

    class OverflowException : std::exception {
        public:
            const char* what() const throw();
    };

    class NotEnoughElementsException : std::exception {
        public:
            const char* what() const throw();
    };

};
