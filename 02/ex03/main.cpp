/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:53:36 by soubella          #+#    #+#             */
/*   Updated: 2023/01/01 19:11:03 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"
#include "Point.hpp"

int main(void) {
	
	Point a = Point(Fixed(7), Fixed(7));
	Point b = Point(Fixed(11), Fixed(1));
	Point c = Point(Fixed(2), Fixed(2));
	
	Point in_point = Point(Fixed(7), Fixed(3));
	
	std::cout << bsp(a, b, c, in_point) << std::endl;
	
	Point out_point = Point(Fixed(10), Fixed(3));
	
	std::cout << bsp(a, b, c, out_point) << std::endl;
}
