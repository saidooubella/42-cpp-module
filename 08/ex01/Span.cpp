/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:59:59 by soubella          #+#    #+#             */
/*   Updated: 2023/01/10 14:05:36 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>

#include "Span.hpp"

Span::~Span() {
    std::cout << "Span destructor called" << std::endl;
}

Span::Span() : limit(0) {
    std::cout << "Span default constructor called" << std::endl;
}

Span::Span(size_t capacity) : limit(capacity) {
    std::cout << "Span size constructor called" << std::endl;
}

Span::Span(const Span &value) {
    std::cout << "Span copy constructor called" << std::endl;
    *this = value;
}

Span& Span::operator =(const Span &value) {
    std::cout << "Span assignment operator called" << std::endl;
    this->numbers.clear();
    for (std::vector<int64_t>::const_iterator i = value.numbers.begin(); i < value.numbers.end(); i++) {
        this->numbers.push_back(*i);
    }
    return *this;
}

size_t abs_value(int64_t x) {
    return x < 0 ? -x : x;
}

void Span::addNumber(int64_t value) {
    if (numbers.size() == limit)
        throw Span::OverflowException();
    numbers.push_back(value);
}

uint64_t Span::shortestSpan() {
    if (numbers.size() < 2)
        throw NotEnoughElementsException();
    uint64_t shortestDistance = std::numeric_limits<uint64_t>::max();
    for (std::vector<int64_t>::iterator i = numbers.begin(); i < numbers.end(); i++) {
        for (std::vector<int64_t>::iterator j = numbers.begin(); j < numbers.end(); j++) {
            if (i == j) continue;
            size_t diff = abs_value(*i - *j);
            if (shortestDistance > diff)
                shortestDistance = diff;
        }
    }
    return shortestDistance;
}

uint64_t Span::longestSpan() {
    if (numbers.size() < 2)
        throw NotEnoughElementsException();
    uint64_t longestDistance = std::numeric_limits<uint64_t>::min();
    for (std::vector<int64_t>::iterator i = numbers.begin(); i < numbers.end(); i++) {
        for (std::vector<int64_t>::iterator j = numbers.begin(); j < numbers.end(); j++) {
            if (i == j) continue;
            size_t diff = abs_value(*i - *j);
            if (longestDistance < diff)
                longestDistance = diff;
        }
    }
    return longestDistance;
}

const char* Span::OverflowException::what() const throw() {
    return "Span::OverflowException: The stack is full";
}

const char* Span::NotEnoughElementsException::what() const throw() {
    return "Span::NotEnoughElementsException: There isn't enough elements in the span";
}

const char* Span::IllegalArgumentException::what() const throw() {
    return "Span::IllegalArgumentException: Invalid arguments";
}
