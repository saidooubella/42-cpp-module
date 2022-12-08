/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:10:07 by soubella          #+#    #+#             */
/*   Updated: 2022/12/05 18:34:25 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>

#include "PhoneBook.hpp"

bool string_is_blank(std::string value) {
	for (size_t i = 0; i < value.length(); i++)
		if (!isspace(value[i]))
			return false;
	return true;
}

std::string promptString(std::string prompt) {
	std::string whole;
	std::cout << prompt;
	std::string input;
	while (string_is_blank(whole)) {
		std::getline(std::cin, input);
		whole.append(input);
	}
	return (input);
}

ssize_t promptInteger(std::string prompt) {
	std::string result = promptString(prompt);
	ssize_t integer;
	std::stringstream sstr(result);
	sstr >> integer;
	if (!sstr || !sstr.eof())
		return -1;
	return (integer);
}

bool checkEOF() {
	if (std::cin.eof()) {
		std::cout << std::endl;
		return (true);
	}
	return (false);
}

int main() {

	PhoneBook phoneBook;

	std::cout << "\nWelcome to the 80s PhoneBook:\n";
	std::cout << "This phone book only supports three commands as you know.. (limited hardware).\n\n";
	std::cout << "The available commands are:\n";
	std::cout << "  - ADD: to add a new record.\n";
	std::cout << "  - SEARCH: to search for an exsting record.\n";
	std::cout << "  - EXIT: to exit from the program.\n\n";
	std::cout << "Note: After exiting the contacts are LOST. Also you can save only 8 records after\n";
	std::cout << "that the previously created ones are overwritten.\n" << std::endl;

	for (;;) {

		std::string command;

		command = promptString("Type a command: ");
		std::cout << '\n';

		if (checkEOF()) break;
		
		if (command.empty()) {
			continue;
		}

		if (command == "EXIT") {
			break;
		} else if (command == "ADD") {
			std::cout << "Enter the following informations:\n";
			std::string firstName = promptString(" - First name: ");
			if (checkEOF()) break;
			std::string lastName = promptString(" - Last name: ");
			if (checkEOF()) break;
			std::string nickname  = promptString(" - Nickname: ");
			if (checkEOF()) break;
			std::string phoneNumber = promptString(" - Phone number: ");
			if (checkEOF()) break;
			std::string darkestSecret = promptString(" - Darkest secret: ");
			if (checkEOF()) break;
			std::cout << '\n';
			phoneBook.add(Contact(firstName, lastName, nickname, phoneNumber, darkestSecret));
			std::cout << "Contact saved successfully\n";
		} else if (command == "SEARCH") {
			phoneBook.print();
			std::cout << '\n';
			ssize_t index;
			while (phoneBook.getSize() > 0) {
				index = promptInteger(" - Enter an index: ");
				if (checkEOF()) break;
				std::cout << '\n';
				if (phoneBook.printAt(index)) break;
				std::cout << '\n';
			}
		} else {
			std::cout << "DID I MENTIONED ANY OF THAT (ノಠ益ಠ)ノ彡┻━┻!?\n";
		}

		std::cout << std::endl;
	}

	std::cout << "(*・ω・)ﾉ さようなら、これからも。" << std::endl;
}
