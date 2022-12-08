/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:42:10 by soubella          #+#    #+#             */
/*   Updated: 2022/12/06 20:53:59 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void) {
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
		std::cout << "C" << std::endl;
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
	
	B a = B();
	
	identify(a);

	return 0;
}
