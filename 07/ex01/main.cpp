/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:43:01 by soubella          #+#    #+#             */
/*   Updated: 2023/01/10 11:09:31 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "iter.hpp"

int main(void)
{
	
	int arrI[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	iter(arrI, 9, intF);
	
	double arrD[] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0 };
	iter(arrD, 9, genericF<double>);
	
	return 0;
}
