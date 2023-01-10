/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 21:41:16 by soubella          #+#    #+#             */
/*   Updated: 2023/01/08 11:12:40 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
void swap(T& a, T&b) {
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
T& max(T& a, T&b) {
	return b >= a ? b : a;
}

template<typename T>
T& min(T& a, T&b) {
	return b <= a ? b : a;
}
