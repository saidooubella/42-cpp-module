/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:36:48 by soubella          #+#    #+#             */
/*   Updated: 2022/12/08 17:47:34 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	
	private:
		Brain *brain;

	public:
		Cat();
		Cat(const Cat &value);
		Cat& operator =(const Cat &value);
		void makeSound(void) const;
		virtual ~Cat();

};
