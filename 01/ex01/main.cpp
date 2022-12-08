/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:34:57 by soubella          #+#    #+#             */
/*   Updated: 2022/11/29 11:40:49 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	
	const int hordeCount = 100;
	
	Zombie *horde = zombieHorde(hordeCount, "Mutant");
	
	for (int i = 0; i < hordeCount; i++) {
		horde[i].announce();
	}
	
	delete [] horde;
	
	return 0;
}
