/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:55:26 by soubella          #+#    #+#             */
/*   Updated: 2022/12/04 20:43:30 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "string"

class Weapon {
	private:
		std::string type;
	public:
		static Weapon defaultWeapon;
		Weapon();
		Weapon(std::string type);
		void setType(std::string type);
		const std::string& getType();
};
