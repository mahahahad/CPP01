/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdull <maabdull@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:04:36 by maabdull          #+#    #+#             */
/*   Updated: 2025/02/15 11:09:42 by maabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

#define RESET "\033[0m"
#define RED "\033[31m"

using std::cout;
using std::string;
using std::getline;

// Expected input: <filename> <s1> <s2>
int	main(int argc, char *argv[]) {
	// Check if 3 arguments have been provided
	if (argc != 4) {
		cout << RED "Error: " RESET "Insufficient Arguments\n";
        cout << "Usage: " << argv[0] << " <filename> <string_to_find> <string_to_replace_with>\n";
		return (1);
	}
	// Create an input file stream with the filename provided
	std::ifstream	inputFile(argv[1]);

	// Check if the file exists and is without issues
	if (!inputFile.good()) {
		cout << RED "Error: " RESET "The file is invalid.\n";
		return (1);
	}

    if (strlen(argv[2]) == 0) {
        cout << RED "Error: " RESET "The target string is invalid.\n";
        return (1);
    }

    if (strlen(argv[3]) == 0) {
        cout << RED "Error: " RESET "The replacement string is invalid.\n";
        return (1);
    }

	// Proceed only if the file is open
	if (inputFile.is_open()) {
		string	line;
		std::ofstream outputFile;
        outputFile.open(string(argv[1]).append(".replace").c_str());

		// Read the file line by line until the end
		while (getline(inputFile, line)) {
            size_t  findIndex = 0;
            // Keep looping till the line contains an instance of the target string
            while ((findIndex = line.find(argv[2], findIndex)) != string::npos) {
                // Replace the line in place with the target string replaced with the replacement string
                line = line.substr(0, findIndex) + argv[3] + line.substr(findIndex + strlen(argv[2]));
                // Update findIndex so next time it finds starting from the end of replacement
                findIndex += strlen(argv[3]);
            }
            // Write the replaced line to the output file
            // Replace the newline character at the end with the replacement character if the target is a newline character
            if (argv[2][0] == '\n') {
                outputFile << line << argv[3];
            } else {
                outputFile << line << "\n";
            }
		}
	}
	return (0);
}
