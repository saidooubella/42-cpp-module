/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:43:11 by soubella          #+#    #+#             */
/*   Updated: 2022/12/07 11:51:51 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stddef.h>

template<typename T> void iter(T* array, size_t size, void apply(T*)) {
	for (size_t i = 0; i < size; i++) {
		apply(array + i);		
	}
}
