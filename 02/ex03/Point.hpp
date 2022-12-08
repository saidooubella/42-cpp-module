/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 10:51:24 by soubella          #+#    #+#             */
/*   Updated: 2022/12/04 20:44:10 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point {

	private:
		Fixed x;
		Fixed y;

	public:
		Point();
		~Point();
		Point(Fixed x, Fixed y);
		Point(const Point &value);
		Point& operator =(const Point &value);
		bool operator ==(const Point &other) const;
		Fixed getX();
		Fixed getY();

};

bool bsp(Point const a, Point const b, Point const c, Point const point);
