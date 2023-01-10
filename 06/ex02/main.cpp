/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:42:10 by soubella          #+#    #+#             */
/*   Updated: 2023/01/09 18:42:51 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void) {
	srand(time(NULL));
	switch (rand() % 3) {
		case 0: return new A();
		case 1: return new B();
		case 2: return new C();
	}
	return NULL;
}

void identify(Base* p) {

	A* a = dynamic_cast<A*>(p);
	if (a != NULL) {
		std::cout << "A" << std::endl;
		return;
	}

	B* b = dynamic_cast<B*>(p);
	if (b != NULL) {
		std::cout << "B" << std::endl;
		return;
	}

	C* c = dynamic_cast<C*>(p);
	if (c != NULL) {
		std::cout << "C" << std::endl;
		return;
	}

	std::cout << "Hold up! Have you changed something?" << std::endl;
}

void identify(Base& p) {

	try {
		(void) dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return;
	} catch (std::bad_cast&) {}

	try {
		(void) dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return;
	} catch (std::bad_cast&) {}

	try {
		(void) dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return;
	} catch (std::bad_cast&) {}

	std::cout << "Hold up! Have you changed something?" << std::endl;
}

int main(void) {
	
	Base *a = generate();
	identify(a);
	delete a;
	
	{
		A aRef;
		Base &base = aRef;
		identify(base);
	}
	
	{
		B aRef;
		Base &base = aRef;
		identify(base);
	}
	
	{
		C aRef;
		Base &base = aRef;
		identify(base);
	}

	return 0;
}
