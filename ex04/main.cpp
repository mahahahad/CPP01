/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdull <maabdull@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:04:36 by maabdull          #+#    #+#             */
/*   Updated: 2025/02/13 10:44:29by maabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::string;
using std::getline;

// Expected input: <filename> <s1> <s2>
int	main(int argc, char *argv[]) {
	// Check if 3 arguments have been provided
	if (argc != 4) {
		cout << "Please provide 3 arguments.\n";
		return (1);
	}
	// Create an input file stream with the filename provided
	std::ifstream	fileToRead(argv[1]);

	// Check if the file exists and is without issues
	if (!fileToRead.good()) {
		cout << "The file is invalid.\n";
		return (1);
	}

	// Proceed only if the file is open
	if (fileToRead.is_open()) {
		string	line;
		string	ext = argv[1];
		ext.append(".replace");
		std::ofstream fileToOutput(ext);

		// Read the file line by line until the end
		while (getline(fileToRead, line)) {
			size_t	findIndex = line.find(argv[2]);
			if (findIndex == string::npos) {
				cout << "No instance of string " << argv[2] << " was found in the line " << line << std::endl;
				fileToOutput << line << "\n";
			} else {
				cout << "String match found at index " << findIndex << std::endl;
				// Write the line into the new file until the starting point of the word to replace
				fileToOutput << line.substr(0, findIndex);
				// Write the replacement word
				fileToOutput << argv[3];
				// Write the remaining part of the line
				fileToOutput << line.substr(strlen(argv[2])) << "\n";
			}
		}
	}
	return (0);
}
