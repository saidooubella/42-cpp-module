/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:25:13 by soubella          #+#    #+#             */
/*   Updated: 2022/11/29 11:37:26 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	
	Zombie *zombie = newZombie("Blazer");
	zombie->announce();
	delete zombie;
	
	randomChump("Howler");

	return 0;
}
