/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:53:35 by soubella          #+#    #+#             */
/*   Updated: 2022/12/04 20:44:00 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed {

	private:
		static int fractionWidth;
		int value;

	public:
		~Fixed();
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &fixed);
		Fixed& operator =(const Fixed &fixed);
		bool   operator >(const Fixed &fixed) const;
		bool   operator >=(const Fixed &fixed) const;
		bool   operator <(const Fixed &fixed) const;
		bool   operator <=(const Fixed &fixed) const;
		bool   operator ==(const Fixed &fixed) const;
		bool   operator !=(const Fixed &fixed) const;
		Fixed  operator +(const Fixed &fixed);
		Fixed  operator -(const Fixed &fixed);
		Fixed  operator *(const Fixed &fixed);
		Fixed  operator /(const Fixed &fixed);
		Fixed& operator ++(void); // ++x
		Fixed  operator ++(int);  // x++
		Fixed& operator --(void); // --x
		Fixed  operator --(int);  // x--
		void   setRawBits(int const raw);
		int    getRawBits(void) const;
		float  toFloat(void) const;
		int    toInt(void) const;
		static const Fixed& min(const Fixed& lhs, const Fixed& rhs);
		static Fixed& min(Fixed& lhs, Fixed& rhs);
		static const Fixed& max(const Fixed& lhs, const Fixed& rhs);
		static Fixed& max(Fixed& lhs, Fixed& rhs);

};

std::ostream& operator <<(std::ostream& os, const Fixed& fixed);
