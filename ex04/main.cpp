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
#include <cstring>

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

    if (strlen(argv[2]) == 0) {
        cout << "The target string is invalid.\n";
        return (1);
    }

    if (strlen(argv[3]) == 0) {
        cout << "The replacement string is invalid.\n";
        return (1);
    }

	// Proceed only if the file is open
	if (fileToRead.is_open()) {
		string	line;
		string	ext = argv[1];
		ext.append(".replace");
		std::ofstream fileToOutput;
        fileToOutput.open(ext.c_str());

		// Read the file line by line until the end
		while (getline(fileToRead, line)) {
            size_t  findIndex = 0;
            while ((findIndex = line.find(argv[2], findIndex)) != string::npos) {
                line = line.substr(0, findIndex) + argv[3] + line.substr(findIndex + strlen(argv[2]));
                findIndex += strlen(argv[3]);
            }
            fileToOutput << line << "\n";
		}
	}
	return (0);
}
