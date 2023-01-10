/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:21:02 by soubella          #+#    #+#             */
/*   Updated: 2023/01/08 15:19:04 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stddef.h>
#include <algorithm>

template<typename T>
typename T::iterator easyfind(T container, int value) {
	typename T::iterator iter = std::find(container.begin(), container.end(), value);
	if (iter == container.end()) throw std::exception();
	return iter;
}
