/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:34:09 by soubella          #+#    #+#             */
/*   Updated: 2022/12/03 20:03:03 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {

	const Animal* meta = new Animal();
	const Animal* j    = new Dog();
	const Animal* i    = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wi    = new WrongCat();

	std::cout << wi->getType() << " " << std::endl;

	wi->makeSound();
	wmeta->makeSound();

	delete wi;
	delete wmeta;
	delete i;
	delete j;
	delete meta;

	return 0;
}
