/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:07:51 by soubella          #+#    #+#             */
/*   Updated: 2023/01/10 14:01:06 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <deque>

template<typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T, C> {

    public:
        typedef typename C::const_iterator const_iterator;
        typedef typename C::iterator iterator;
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
