/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:36:48 by soubella          #+#    #+#             */
/*   Updated: 2022/12/08 16:05:27 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal {

	public:
		Cat();
		Cat(const Cat &value);
		Cat& operator =(const Cat &value);
		void makeSound(void) const;
		virtual ~Cat();

};
