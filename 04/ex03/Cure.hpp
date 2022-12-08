/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 20:19:54 by soubella          #+#    #+#             */
/*   Updated: 2022/12/03 20:51:24 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria {

	public:
		Cure();
		~Cure();
		Cure(const Cure &value);
		Cure& operator =(const Cure &value);
		void use(ICharacter& target) const;
		Cure* clone() const;

};
