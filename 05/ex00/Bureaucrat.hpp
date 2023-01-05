/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:11:35 by soubella          #+#    #+#             */
/*   Updated: 2023/01/05 11:38:08 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Bureaucrat {
	
	private:
		const std::string name;
		int               grade;

	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &value);
		Bureaucrat(const std::string name, int grade);
		Bureaucrat& operator =(const Bureaucrat &value);
		const std::string getName() const;
		void incrementGrade();
		void decrementGrade();
		int getGrade() const;

	class GradeTooHighException : public std::exception {
		public:
			const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			const char* what() const throw();
	};
};

std::ostream& operator <<(std::ostream& os, const Bureaucrat& bureaucrat);
