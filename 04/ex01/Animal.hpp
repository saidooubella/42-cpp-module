/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:35:03 by soubella          #+#    #+#             */
/*   Updated: 2022/12/04 17:18:57 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Animal {
	
	protected:
		std::string type;

	public:
		Animal();
		Animal(const Animal &value);
		std::string getType() const;
		Animal& operator =(const Animal &value);
		virtual void makeSound(void) const;
		virtual ~Animal();

};
