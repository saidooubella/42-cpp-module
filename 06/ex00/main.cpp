/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:42:35 by soubella          #+#    #+#             */
/*   Updated: 2023/01/09 14:13:06 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <cmath>

typedef enum {
	CHAR,
	INVALID_INPUT,
	INTEGER,
	DOUBLE,
	FLOAT,
} ResolverResult;

typedef enum {
	POSITIVE,
	NEGATIVE,
} Sign;

ResolverResult resolveCharLiteral(std::string input) {

	size_t index = 1;

	if (index >= input.length()) {
		return INVALID_INPUT;
	}

	index++;

	if (index >= input.length() || input[index] != '\'') {
		return INVALID_INPUT;
	}

	index++;

	if (index == input.length()) {
		return CHAR;
	}

	return INVALID_INPUT;
}

ResolverResult resolveNumberLiteral(std::string input) {
	
	ResolverResult result = INTEGER;
	Sign sign = POSITIVE;
	
	switch (input[0]) {
		case '-':
			sign = NEGATIVE;
			// fallthrough
		case '+':
			input = input.substr(1);
	}
	
	size_t	index = 0;

	while (index < input.length() && isdigit(input[index])) {
		index++;
	}

	if (input[index] == '.' && (index != 0 || (index + 1 < input.length() && isdigit(input[index + 1])))) {

		result = DOUBLE;

		index++;

		while (index < input.length() && isdigit(input[index])) {
			index++;
		}

		if (index < input.length() && (input[index] == 'f' || input[index] == 'F')) {
			result = FLOAT;
			index++;
		}
	}

	if (index != input.length()) {
		result = INVALID_INPUT;
	}

	if (result == INTEGER) {
		std::istringstream isstr(input);
		unsigned long long num;
		isstr >> num;
		if ((!isstr) || (!isstr.eof()) ||
			(sign == POSITIVE && num > 2147483647) ||
			(sign == NEGATIVE && num > 2147483648)
		) {
			result = INVALID_INPUT;
		}
	}

	return result;
}

#define ConstantsCount 8

typedef struct {
	std::string		name;
	ResolverResult	type;
} Constant;

const Constant constants[ConstantsCount] = {
	{ .name = "+inff", .type = FLOAT },
	{ .name = "-inff", .type = FLOAT },
	{ .name = "inff", .type = FLOAT },
	{ .name = "nanf", .type = FLOAT },
	{ .name = "+inf", .type = DOUBLE },
	{ .name = "-inf", .type = DOUBLE },
	{ .name = "inf", .type = DOUBLE },
	{ .name = "nan", .type = DOUBLE },
};

ResolverResult resolveInput(std::string input) {

	if ((input.empty()) || (input.length() == 1 && (input[0] == '+' || input[0] == '-'))) {
		return INVALID_INPUT;
	}

	for (size_t i = 0; i < ConstantsCount; i++) {
		Constant constant = constants[i];
		if (constant.name == input) {
			return constant.type;
		}
	}

	return input[0] == '\'' ? resolveCharLiteral(input) : resolveNumberLiteral(input);
}

void	print(
	char c,
	int integer,
	float decimal,
	double ddecimal
) {
	if (std::isinf(decimal) || std::isnan(decimal)) {
		std::cout << "char   : impossible" << '\n';
		std::cout << "int    : impossible" << '\n';
	} else {
		std::cout << "char   : ";
		if (isprint(c))
			std::cout << '\'' << c << '\'' << '\n';
		else
			std::cout << "Non printable" << '\n';
		std::cout << "int    : " << integer << '\n';
	}
	std::cout << std::fixed << std::setprecision(1) << "float  : " << decimal << "f" << '\n';
	std::cout << std::fixed << std::setprecision(1) << "double : " << ddecimal << std::endl;
}

int main(int argc, char const *argv[]) {
	
	if (argc != 2) {
		std::cout << "Invalid number of arguments." << '\n';
		std::cout << "Usage: " << argv[0] << " [literal]" << std::endl;
		return 1;
	}

	std::string input = argv[1];

	ResolverResult result = resolveInput(input);

	switch (result) {
		case CHAR: {
			const char c = input[1];
			print(c, static_cast<int>(c), static_cast<float>(c), static_cast<double>(c));
			break;
		}
		case INTEGER: {
			std::stringstream sstr(input);
			int integer;
			sstr >> integer;
			print(static_cast<char>(integer), integer, static_cast<float>(integer), static_cast<double>(integer));
			break;
		}
		case DOUBLE: {
			std::stringstream sstr(input);
			double ddecimal;
			sstr >> ddecimal;
			print(static_cast<char>(ddecimal), static_cast<int>(ddecimal), static_cast<float>(ddecimal), ddecimal);
			break;
		}
		case FLOAT: {
			std::stringstream sstr(input.substr(0, input.length() - 1));
			float decimal;
			sstr >> decimal;
			print(static_cast<char>(decimal), static_cast<int>(decimal), decimal, static_cast<double>(decimal));
			break;
		}
		case INVALID_INPUT: {
			std::cout << "Invalid input." << std::endl;
			break;
		}
	}
	return 0;
}
