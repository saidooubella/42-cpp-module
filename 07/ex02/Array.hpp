/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:07:25 by soubella          #+#    #+#             */
/*   Updated: 2023/01/10 11:12:42 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>

template<typename T>
class Array {
	
	private:
		T        *array;
		size_t _size;

	public:

		Array() {
			array = new T[this->_size = 0]();
		}

		Array(size_t size) {
			array = new T[this->_size = size]();
		}

		Array(const Array &value) {
			this->array = new T[this->_size = value._size];
			for (size_t i = 0; i < value._size; i++) {
				this->array[i] = value.array[i];
			}
		}

		~Array() {
			delete[] array;
		}

		size_t size() const {
			return _size;
		}

		Array& operator =(const Array &value) {
			if (this != &value) {
				this->~Array();
				new(this) Array(value);
			}
			return (*this);
		}

		T& operator [](const size_t index) {
			if (0 > index || index >= _size) {
				throw std::exception();
			}
			return array[index];
		}

};
