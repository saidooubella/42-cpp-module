/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:11:35 by soubella          #+#    #+#             */
/*   Updated: 2022/12/04 20:45:23 by soubella         ###   ########.fr       */
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
		int getGrade() const;
		void signForm(Form &form);
		void incrementGrade();
		void decrementGrade();

	class GradeTooHighException : public std::exception {
		public:
			const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			const char* what() const throw();
	};
};
