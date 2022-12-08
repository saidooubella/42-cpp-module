/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 20:29:05 by soubella          #+#    #+#             */
/*   Updated: 2022/12/03 21:03:10 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {

	private:
		std::string name;
		AMateria    **materials;

	public:
		Character();
		~Character();
		Character(std::string name);
		Character(const Character &value);
		Character& operator =(const Character &value);
		std::string const & getName() const;
		void use(int idx, ICharacter& target);
		void equip(AMateria* m);
		void unequip(int idx);

};
