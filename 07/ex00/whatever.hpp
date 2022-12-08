/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 21:41:16 by soubella          #+#    #+#             */
/*   Updated: 2022/12/07 11:38:56 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T> void swap(T& a, T&b) {
	T temp = a;
	a = b;
	b = temp;
}

template<typename T> T& max(T& a, T&b) {
	return a > b ? a : b;
}

template<typename T> T& min(T& a, T&b) {
	return a < b ? a : b;
}
