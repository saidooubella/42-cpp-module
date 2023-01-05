/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:35:36 by soubella          #+#    #+#             */
/*   Updated: 2023/01/02 18:57:43 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
	ScavTrap scavTrap("ss");
	scavTrap.takeDamage(5);
	scavTrap.beRepaired(5);
	scavTrap.beRepaired(5);
	scavTrap.beRepaired(5);
	scavTrap.beRepaired(5);
	scavTrap.beRepaired(5);
	scavTrap.beRepaired(5);
	scavTrap.beRepaired(5);
	scavTrap.beRepaired(5);
	scavTrap.beRepaired(5);
	scavTrap.beRepaired(5);
	scavTrap.beRepaired(5);
	scavTrap.beRepaired(5);
	scavTrap.beRepaired(5);
	scavTrap.beRepaired(5);
	scavTrap.beRepaired(5);
	scavTrap.beRepaired(5);
	scavTrap.beRepaired(5);
	scavTrap.beRepaired(5);
	scavTrap.beRepaired(5);
	scavTrap.beRepaired(5);
	scavTrap.beRepaired(5);
	scavTrap.beRepaired(5);
	scavTrap.guardGate();
	scavTrap.attack("human");
}
