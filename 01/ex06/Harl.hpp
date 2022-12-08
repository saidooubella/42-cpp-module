/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:58:43 by soubella          #+#    #+#             */
/*   Updated: 2022/12/04 20:57:25 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

typedef enum {
	NONE,
	ERROR,
	WARNING,
	INFO,
	DEBUG,
} DebugLevel;

class Harl {

	private:
		DebugLevel level;
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

	public:
		Harl(DebugLevel level);
		void complain(std::string level);

};
