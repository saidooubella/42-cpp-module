/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:53:35 by soubella          #+#    #+#             */
/*   Updated: 2022/12/04 20:43:45 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed {

	private:
		static int factionWidth;
		int value;

	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &fixed);
		Fixed& operator =(const Fixed &fixed);
		void setRawBits(int const raw);
		int getRawBits(void) const;

};
