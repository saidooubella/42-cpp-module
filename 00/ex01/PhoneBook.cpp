/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:13:33 by soubella          #+#    #+#             */
/*   Updated: 2022/12/31 16:19:59 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->cursor = 0;
	this->size = 0;
}

void PhoneBook::add(Contact contact) {
	contacts[cursor] = contact;
	cursor = (cursor + 1) % 8;
	if (size < 8) size++;
}

void printText(std::string str) {
	if (str.length() > 10) {
		str.resize(9);
		std::cout << str << '.';
	} else {
		std::cout << std::left << std::setw(10) << str;
	}
}

int PhoneBook::getSize() {
	return size;
}

void PhoneBook::print() {
	
	std::cout << "-------------------------------------------\n";
	std::cout << "  Index   |First Name|Last Name | Nickname \n";
	std::cout << "-------------------------------------------\n";

	if (size > 0) {
		for (ssize_t i = 0; i < size; i++) {
			Contact contact = contacts[i];
			printText(std::to_string(i));
			std::cout << '|';
			printText(contact.getFirstName());
			std::cout << '|';
			printText(contact.getLastName());
			std::cout << '|';
			printText(contact.getNickname());
			std::cout << '\n';
		}
	} else {
		std::cout << "                   Empty                   \n";
	}

	std::cout << "-------------------------------------------";
	std::cout << std::endl;
}

bool PhoneBook::printAt(ssize_t index) {

	if (0 > index || index >= size) {
		std::cout << "Invalid input" << std::endl;
		return false;
	}

	Contact contact = contacts[index];
	
	std::cout << "First Name      : " << contact.getFirstName() << '\n';
	std::cout << "Last Name       : " << contact.getLastName() << '\n';
	std::cout << "Nickname        : " << contact.getNickname() << '\n';
	std::cout << "Phone Number    : " << contact.getPhoneNumber() << '\n';
	std::cout << "Darkest Secret  : " << contact.getDarkestSecret() << std::endl;
	return true;
}
