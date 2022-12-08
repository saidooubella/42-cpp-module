/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:58:44 by soubella          #+#    #+#             */
/*   Updated: 2022/12/01 17:30:02 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Harl.hpp"

bool isDebugLevel(std::string level) {
	if (level == "WARNING" || level == "ERROR")
		return (true);
	if (level == "DEBUG" || level == "INFO")
		return (true);
	return (false);
}

DebugLevel asDebugLevel(std::string level) {
	if (level == "WARNING")
		return WARNING;
	if (level == "ERROR")
		return ERROR;
	if (level == "DEBUG")
		return DEBUG;
	if (level == "INFO")
		return INFO;
	return NONE;
}

int main(int argc, char *argv[]) {
	
	if (argc != 2 || !isDebugLevel(argv[1])) {
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return 0;
	}

	Harl harl(asDebugLevel(argv[1]));
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("VERBOSE");
	return 0;
}
