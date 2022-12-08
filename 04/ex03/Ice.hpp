/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 20:19:54 by soubella          #+#    #+#             */
/*   Updated: 2022/12/03 20:51:03 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria {

	public:
		Ice();
		~Ice();
		Ice(const Ice &value);
		Ice& operator =(const Ice &value);
		void use(ICharacter& target) const;
		Ice* clone() const;

};
