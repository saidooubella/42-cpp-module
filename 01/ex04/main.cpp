/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soubella <soubella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:09:19 by soubella          #+#    #+#             */
/*   Updated: 2022/12/04 20:15:02 by soubella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int streamEditor(std::string filename, std::string target, std::string replacement) {
	
	std::fstream infile(filename, std::ios::in);
	
	if (!infile.is_open()) {
		std::cout << "Error: Unable to open the file." << std::endl;
		return 1;
	}
	
	std::fstream outfile(filename + ".replace", std::ios::out | std::ios::trunc);
	
	if (!outfile.is_open()) {
		std::cout << "Error: Unable to create the output file." << std::endl;
		return 1;
	}
	
	std::string content;

	for (std::string line; std::getline(infile, line); ) {
		content.append(line).append("\n");
	}
	
	for (size_t i = 0; i < content.length(); i++) {
		if (!target.empty() && content.substr(i, target.length()) == target) {
			outfile << replacement;
			i += target.length() - 1;
		} else {
			outfile << content[i];
		}
	}
	
	return 0;
}

int main(int argc, char const *argv[]) {

	if (argc != 4) {
		std::cout << "Invalid number of arguments arguments.\n";
		std::cout << "Usage: " << argv[0] << " [filename] [target] [replacement]";
		std::cout << std::endl;
		return 1;
	}

	return streamEditor(argv[1], argv[2], argv[3]);
}
