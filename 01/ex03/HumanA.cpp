/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:12:59 by soubella          #+#    #+#             */
/*   Updated: 2022/11/30 16:05:45 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) {
	this->weapon = &weapon;
	this->name = name;
}

void HumanA::attack() {
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
