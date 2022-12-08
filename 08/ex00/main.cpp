/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:35:26 by soubella          #+#    #+#             */
/*   Updated: 2022/12/07 20:17:23 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <deque>

#include "easyfind.hpp"

int main(void) {
	
	std::vector<int> x;
	
	x.push_back(0);
	x.push_back(1);
	x.push_back(2);
	x.push_back(3);
	x.push_back(4);
	x.push_back(5);
	x.push_back(6);
	x.push_back(7);
	
	std::deque<int> y;
	
	y.push_back(0);
	y.push_back(1);
	y.push_back(2);
	y.push_back(3);
	y.push_back(4);
	y.push_back(5);
	y.push_back(6);
	y.push_back(7);
	
	easyfind(x, 8);
	easyfind(y, 5);
	
	return 0;
}
