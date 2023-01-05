/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 20:16:14 by soubella          #+#    #+#             */
/*   Updated: 2023/01/04 13:13:41 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

#include "ICharacter.hpp"

class ICharacter;

class AMateria {

	protected:
		std::string type;

	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria &value);
		AMateria& operator =(const AMateria &value);
		std::string const & getType() const;
		virtual ~AMateria();
		virtual void use(ICharacter& target) const = 0;
		virtual AMateria* clone() const = 0;

};
