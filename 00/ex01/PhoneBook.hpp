/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:14:35 by soubella          #+#    #+#             */
/*   Updated: 2022/12/04 21:21:22 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"

class PhoneBook {

	private:
		Contact contacts[8];
		int		cursor;
		int		size;

	public:
		PhoneBook();
		void add(Contact contact);
		bool printAt(ssize_t index);
		int getSize();
		void print();

};
