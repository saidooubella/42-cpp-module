/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:07:51 by soubella          #+#    #+#             */
/*   Updated: 2022/12/07 20:16:06 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {

    public:
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() throw() {
            return std::stack<T>::c.begin();
        }
        const_iterator begin() const throw() {
            return std::stack<T>::c.begin();
        }
        iterator end() throw() {
            return std::stack<T>::c.end();
        }
        const_iterator end() const throw() {
            return std::stack<T>::c.end();
        }

};
