/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:16:35 by soubella          #+#    #+#             */
/*   Updated: 2022/12/03 21:32:40 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
	
	private:
		AMateria **materials;

	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource &value);
		MateriaSource& operator =(const MateriaSource& value);
		void learnMateria(AMateria* material);
		AMateria* createMateria(const std::string& type);

};
