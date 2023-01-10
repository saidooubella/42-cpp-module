/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:43:11 by soubella          #+#    #+#             */
/*   Updated: 2023/01/10 11:08:58 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stddef.h>
#include <iostream>

template<typename T>
void iter(T* array, size_t size, void apply(const T&)) {
	for (size_t i = 0; i < size; i++) {
		apply(array[i]);
	}
}

template<typename T>
void iter(T* array, size_t size, void apply(T &)) {
	for (size_t i = 0; i < size; i++) {
		apply(array[i]);
	}
}

template<typename T>
void genericF(T& value) {
	std::cout << value << std::endl;
}

void intF(const int& value) {
	std::cout << value << std::endl;
}
