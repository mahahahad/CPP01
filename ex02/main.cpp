/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdull <maabdull@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:13:23 by maabdull          #+#    #+#             */
/*   Updated: 2025/02/11 14:59:56 by maabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

using std::string;
using std::endl;
using std::cout;

int main(void) {
    string  sentence = "HI THIS IS BRAIN";
    string  *stringPTR = &sentence;
    string  &stringREF = sentence;

    // Print memory addresses
    cout << "Memory Addresses:\n";
    cout << "variable: " << &sentence << "\n";
    cout << "stringPTR: " << stringPTR << "\n";
    cout << "stringREF: " << &stringREF << "\n";
    cout << endl;

    // Print values
    cout << "Values:\n";
    cout << "variable: " << sentence << "\n";
    cout << "stringPTR: " << *stringPTR << "\n";
    cout << "stringREF: " << stringREF << endl;
}
