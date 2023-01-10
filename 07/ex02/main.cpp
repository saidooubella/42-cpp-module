/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:13:21 by soubella          #+#    #+#             */
/*   Updated: 2023/01/08 15:52:59 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cassert>

#include "Array.hpp"

#define MAX_VAL 750

int main(void) {
	
	Array<int> ints(5);

	std::cout << ints[0] << std::endl;
	std::cout << ints[4] << std::endl;
	
	try {
		std::cout << ints[5] << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Index out of bounds" << std::endl;
	}
	
	assert(ints.size() == 5);
	
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
	
    for (int i = 0; i < MAX_VAL; i++) {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
	
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++) {
        assert(mirror[i] == numbers[i]);
    }

    try {
        numbers[-2] = 0;
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
	
    try {
        numbers[MAX_VAL] = 0;
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++) {
        numbers[i] = rand();
    }
	
    delete [] mirror;
	
	system("leaks Array");

	return 0;
}
