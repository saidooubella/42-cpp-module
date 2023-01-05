/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:21:02 by soubella          #+#    #+#             */
/*   Updated: 2022/12/30 18:56:54 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stddef.h>

template<typename T>
bool easyfind(T container, int value) {
	for (size_t i = 0; i < container.size(); i++) {
		if (container[i] == value) {
			std::cout << "Found!" << std::endl;
			return true;
		}
	}
	return false;
}
