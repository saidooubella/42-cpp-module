/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:53:36 by soubella          #+#    #+#             */
/*   Updated: 2022/12/02 12:05:55 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"
#include "Point.hpp"

int main(void) {
	
	Point point = Point(Fixed(9), Fixed(12));

	Point a = Point(Fixed(7), Fixed(7));
	Point b = Point(Fixed(11), Fixed(1));
	Point c = Point(Fixed(2), Fixed(2));
	
	std::cout << bsp(a, b, c, point) << std::endl;
}
