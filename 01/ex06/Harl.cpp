/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:58:41 by soubella          #+#    #+#             */
/*   Updated: 2022/12/04 20:57:27 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Harl.hpp"

typedef struct {
	std::string	name;
	void		(Harl::*func)(void);
} LogFunction;

Harl::Harl(DebugLevel level) {
	this->level = level;
}

void Harl::debug(void) {
	if (level < DEBUG) return;
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void Harl::info(void) {
	if (level < INFO) return;
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n" << std::endl;
}

void Harl::warning(void) {
	if (level < WARNING) return;
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n" << std::endl;
}

void Harl::error(void) {
	if (level < ERROR) return;
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void Harl::complain(std::string level) {

	const LogFunction funcs[] = {
		{ .name = "DEBUG", .func = &Harl::debug },
		{ .name = "INFO", .func = &Harl::info },
		{ .name = "WARNING", .func = &Harl::warning },
		{ .name = "ERROR", .func = &Harl::error },
	};

	for (size_t i = 0; i < 4; i++) {
		if (funcs[i].name == level) {
			(this->*funcs[i].func)();
			return;
		}
	}

	std::cout << "'" << level << "' logging level is not supported." << std::endl;
}
