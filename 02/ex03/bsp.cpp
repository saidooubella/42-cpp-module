/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 10:51:26 by soubella          #+#    #+#             */
/*   Updated: 2022/12/02 11:56:17 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed abs(Fixed x) {
	return x < 0 ? x * Fixed(-1) : x;
}

Fixed area(Point a, Point b, Point c) {
	return abs((a.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY())) + (c.getX() * (a.getY() - b.getY()))) / Fixed(2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	
	if (a == point || b == point || c == point)
		return false;

	Fixed triangleAArea = area(a, b, point);
	Fixed triangleBArea = area(a, c, point);
	Fixed triangleCArea = area(b, c, point);
	
	if (triangleAArea == Fixed(0) || triangleBArea == Fixed(0) || triangleCArea == Fixed(0))
		return false;

	Fixed triangleArea = area(a, b, c);

	return triangleAArea + triangleBArea + triangleCArea == triangleArea;
}
