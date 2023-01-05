/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:55:26 by soubella          #+#    #+#             */
/*   Updated: 2023/01/01 12:02:39 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "string"

class Weapon {
	private:
		std::string type;
	public:
		Weapon();
		Weapon(std::string type);
		void setType(std::string type);
		const std::string& getType();
};
