/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:00:19 by soubella          #+#    #+#             */
/*   Updated: 2022/12/04 21:37:51 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av) {

	if (ac < 2) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}

	for (size_t i = 1; i < (size_t) ac; i++) {
		std::string str = std::string(av[i]);
		for (size_t j = 0; j < str.length(); j++) {
			std::cout << (char) std::toupper(str[j]);
		}
	}

	std::cout << std::endl;
	return (0);
}
