/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:13:30 by soubella          #+#    #+#             */
/*   Updated: 2022/11/28 13:55:05 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#include "Contact.hpp"

Contact::Contact() {
	this->darkestSecret = "";
	this->phoneNumber = "";
	this->firstName = "";
	this->lastName = "";
	this->nickname = "";
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret) {
	this->darkestSecret = darkestSecret;
	this->phoneNumber = phoneNumber;
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickname = nickname;
}

std::string Contact::getFirstName() {
	return firstName;
}

std::string Contact::getLastName() {
	return lastName;
}

std::string Contact::getNickname() {
	return nickname;
}

std::string Contact::getPhoneNumber() {
	return phoneNumber;
}

std::string Contact::getDarkestSecret() {
	return darkestSecret;
}
