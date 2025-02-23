#include "Harl.hpp"

enum	LOG_LEVEL {
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	INVALID,
};

LOG_LEVEL	getLogLevel(std::string levelStr) {
	if (levelStr == "DEBUG")
		return DEBUG;
	if (levelStr == "INFO")
		return INFO;
	if (levelStr == "WARNING")
		return WARNING;
	if (levelStr == "ERROR")
		return ERROR;
	return INVALID;
}

int	main(int argc, char *argv[]) {
	if (argc != 2) {
		cout << "[ Probably complaining about insignificant problems ]" << endl;
		return (0);
	}
	LOG_LEVEL logLevel = getLogLevel(std::string(argv[1]));
	Harl	harl;
	switch (logLevel)
	{
		default:
			cout << "[ Probably complaining about insignificant problems ]" << endl;
			break;
		case DEBUG:
		 	cout << "[ DEBUG ]\n";
			harl.complain("DEBUG");
			cout << endl;
		case INFO:
		 	cout << "[ INFO ]\n";
			harl.complain("INFO");
			cout << endl;
		case WARNING:
		 	cout << "[ WARNING ]\n";
			harl.complain("WARNING");
			cout << endl;
		case ERROR:
		 	cout << "[ ERROR ]\n";
			harl.complain("ERROR");
			cout << endl;
	}
	return (0);
}
