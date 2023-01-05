/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:51:05 by soubella          #+#    #+#             */
/*   Updated: 2023/01/05 15:58:52 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdint>
#include <iostream>

#include "Data.hpp"

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int main(void) {
	
	Data* data = new Data("secret", 1564894894);
	
	uintptr_t ptr = serialize(data);
	Data*     dt  = deserialize(ptr);
	
	std::cout << "[" << dt->key << " : " << dt->value << "]" << std::endl;
	
	delete dt;

	return 0;
}
