/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:36:48 by soubella          #+#    #+#             */
/*   Updated: 2022/12/08 17:47:49 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	
	private:
		Brain *brain;

	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog &value);
		Dog& operator =(const Dog &value);
		void makeSound(void) const;

};
