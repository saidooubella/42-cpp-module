/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:49:09 by soubella          #+#    #+#             */
/*   Updated: 2023/01/05 15:57:42 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Data {
	
	public:
		const std::string	value;
		const int			key;

	public:
		Data();
		~Data();
		Data(std::string value, int key);
		Data(const Data &value);
		Data& operator =(const Data &value);

};
