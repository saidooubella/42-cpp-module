/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:47:10 by soubella          #+#    #+#             */
/*   Updated: 2022/11/29 11:52:35 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {
	
	std::string string = "HI THIS IS BRAIN";
	
	std::string *stringPTR = &string;
	
	std::string &stringREF = string;
	
	std::cout << "string address: " << &string << std::endl;
	
	std::cout << "stringPTR address: " << &stringPTR << std::endl;
	
	std::cout << "stringREF address: " << &stringREF << std::endl;
	
	std::cout << "string value: " << string << std::endl;
	
	std::cout << "stringPTR value: " << *stringPTR << std::endl;
	
	std::cout << "stringREF value: " << stringREF << std::endl;

	return (0);
}