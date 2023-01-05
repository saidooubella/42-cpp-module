/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 12:50:56 by soubella          #+#    #+#             */
/*   Updated: 2022/12/04 17:53:16 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	private:
		const int			requiredExecutionGrade;
		const int			requiredSigningGrade;
		bool     			isSigned;
		const std::string	name;

	protected:
		virtual void _execute(const Bureaucrat& executor) const = 0;

	public:
		Form();
		virtual ~Form() = 0;
		void execute(const Bureaucrat& executor) const;
		Form(const Form &value);
		Form(std::string name, const int requiredSigningGrade, const int requiredExecutionGrade);
		Form& operator =(const Form &value);
		void beSigned(Bureaucrat& bureaucrat);
		int getRequiredExecutionGrade() const;
		int getRequiredSigningGrade() const;
		std::string getName() const;
		void setIsSigned(bool isSigned);
		bool getIsSigned() const;

	class GradeTooHighException : public std::exception {
		public:
			const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			const char* what() const throw();
	};

	class FormNotSignedException : public std::exception {
		public:
			const char* what() const throw();
	};

};

std::ostream& operator <<(std::ostream& os, const Form& form);
