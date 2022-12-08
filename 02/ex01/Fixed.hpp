/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:53:35 by soubella          #+#    #+#             */
/*   Updated: 2022/12/04 20:43:50 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed {

	private:
		static int fractionWidth;
		int value;

	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();
		Fixed(const Fixed &fixed);
		Fixed& operator =(const Fixed &fixed);
		void setRawBits(int const raw);
		int getRawBits(void) const;
		float toFloat(void) const;
		int toInt(void) const;

};

std::ostream& operator <<(std::ostream& os, const Fixed& fixed);
