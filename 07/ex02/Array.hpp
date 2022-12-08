/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:07:25 by soubella          #+#    #+#             */
/*   Updated: 2022/12/07 13:21:44 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>

template<typename T>
class Array {
	
	private:
		T      *array;
		size_t size;

	public:
	
		Array() {
			array = new T[this->size = 0]();
		}
		
		Array(size_t size) {
			array = new T[this->size = size]();
		}
		
		Array(const Array &value) {
			*this = value;
		}

		~Array() {
			delete[] array;
		}
		
		size_t size() const {
			return size;
		}

		Array& operator =(const Array &value) {
			array = new T[this->size = value.size];
			for (size_t i = 0; i < value.size; i++) {
				array[i] = value.array[i];
			}
		}

		T* operator [](const size_t index) {
			if (0 > index || index >= size) {
				throw std::exception();
			}
			return array[index];
		}

};
