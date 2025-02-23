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
