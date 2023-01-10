/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 20:15:25 by soubella          #+#    #+#             */
/*   Updated: 2023/01/07 13:06:09 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main()
{
	
	IMateriaSource* src = new MateriaSource();
	ICharacter* bob = new Character("bob");
	ICharacter* me = new Character("me");
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("cure"));
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;

	IMateriaSource* materiaSrc = new MateriaSource();
	ICharacter* someone = new Character("someone");
	ICharacter* self = new Character("self");
	
	materiaSrc->learnMateria(new Cure());
	materiaSrc->learnMateria(new Ice());

	someone->equip(materiaSrc->createMateria("ice"));
	someone->use(0, *self);

	delete materiaSrc;
	delete someone;
	delete self;
	
	system("leaks InterfaceRecap");

	return 0;
}
