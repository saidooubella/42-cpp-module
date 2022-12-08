/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:02:07 by soubella          #+#    #+#             */
/*   Updated: 2022/12/04 20:43:20 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

#include "Weapon.hpp"

class HumanA {
	private:
		std::string name;
		Weapon* weapon;
	public:
		HumanA(std::string name, Weapon& weapon);
		void attack();
};
