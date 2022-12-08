/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:59:59 by soubella          #+#    #+#             */
/*   Updated: 2022/12/07 21:50:37 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Span.hpp"

Span::~Span() {
    std::cout << "Span destructor called" << std::endl;
    delete[] numbers;
}

Span::Span() {
    std::cout << "Span default constructor called" << std::endl;
    this->numbers = new int64_t[this->capacity = 0]();
    this->shortestDistance = 18446744073709551615UL;
    this->longestDistance = 0;
    this->size = 0;
}

Span::Span(size_t capacity) {
    std::cout << "Span size constructor called" << std::endl;
    this->numbers = new int64_t[this->capacity = capacity]();
    this->shortestDistance = 18446744073709551615UL;
    this->longestDistance = 0;
    this->size = 0;
}

Span::Span(const Span &value) {
    std::cout << "Span copy constructor called" << std::endl;
    *this = value;
}

Span& Span::operator =(const Span &value) {
    std::cout << "Span assignment operator called" << std::endl;
    this->numbers = new int64_t[this->capacity = value.capacity]();
    this->shortestDistance = value.shortestDistance;
    this->longestDistance = value.longestDistance;
    this->size = value.size;
    for (size_t i = 0; i < value.size; i++) {
        this->numbers[i] = value.numbers[i];
    }
    return *this;
}

size_t abs_value(int64_t x) {
    return x < 0 ? -x : x;
}

void Span::addNumber(int64_t value) {
    if (size == capacity)
        throw Span::OverflowException();
    for (size_t i = 0; i < size; i++) {
        size_t diff = abs_value(numbers[i] - value);
        if (shortestDistance > diff)
            shortestDistance = diff;
        if (longestDistance < diff)
            longestDistance = diff;
    }
    numbers[size++] = value;
}

size_t Span::shortestSpan() {
    if (size < 2)
        throw NotEnoughElementsException();
    return shortestDistance;
}

size_t Span::longestSpan() {
    if (size < 2)
        throw NotEnoughElementsException();
    return longestDistance;
}

const char* Span::OverflowException::what() const throw() {
    return "Span::OverflowException: The stack is full";
}

const char* Span::NotEnoughElementsException::what() const throw() {
    return "Span::NotEnoughElementsException: There isn't enough elements in the span";
}
