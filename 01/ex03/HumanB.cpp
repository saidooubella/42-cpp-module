/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:19:29 by soubella          #+#    #+#             */
/*   Updated: 2022/12/04 18:42:50 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) {
	this->weapon = NULL;
	this->name = name;
}

void HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}

void HumanB::attack() {
	std::cout << name;
	if (weapon) {
		std::cout << " attacks with their " << weapon->getType();
	} else {
		std::cout << " doesn't have a weapon";
	}
	std::cout << std::endl;
}
