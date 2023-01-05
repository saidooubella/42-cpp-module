/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:34:09 by soubella          #+#    #+#             */
/*   Updated: 2023/01/04 13:12:05 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
	
	const int size = 2;

	Animal *animals[size];

	for (int i = 0; i < size / 2; i++) {
		animals[i] = new Cat();
	}

	for (int i = size / 2; i < size; i++) {
		animals[i] = new Dog();
	}
	
	for (int i = 0; i < size; i++) {
		delete animals[i];
	}
	
	return 0;
}
