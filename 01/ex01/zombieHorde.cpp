/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:24:21 by soubella          #+#    #+#             */
/*   Updated: 2022/11/29 11:34:20 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	Zombie *zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombies[i] = Zombie(name);
	return zombies;
}
