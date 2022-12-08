/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:43:01 by soubella          #+#    #+#             */
/*   Updated: 2022/12/07 12:04:34 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "iter.hpp"

void f(int *value) {
	std::cout << *value << std::endl;
}

int main(void)
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	iter(arr, 9, f);
	return 0;
}
