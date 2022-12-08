/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:36:48 by soubella          #+#    #+#             */
/*   Updated: 2022/12/08 16:05:34 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal {

	public:
		Dog();
		Dog(const Dog &value);
		Dog& operator =(const Dog &value);
		void makeSound(void) const;
		virtual ~Dog();

};
