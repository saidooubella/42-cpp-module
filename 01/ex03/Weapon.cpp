/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:15:47 by soubella          #+#    #+#             */
/*   Updated: 2023/01/01 12:02:45 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon() {
	this->type = "";
}

Weapon::Weapon(std::string type) {
	this->type = type;
}

void Weapon::setType(std::string type) {
	this->type = type;
}

const std::string& Weapon::getType() {
	return type;
}
