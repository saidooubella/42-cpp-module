/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:46:01 by soubella          #+#    #+#             */
/*   Updated: 2022/12/03 18:58:40 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Brain {
	
	private:
		std::string ideas[100];

	public:
		Brain();
		~Brain();
		Brain(const Brain &value);
		Brain& operator =(const Brain &value);

};
