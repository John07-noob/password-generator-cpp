/*
Author	: John07-noob
Date	: Nov/09/2020
*/
#include <iostream>

std::string alpha_rand(int chooice) {
	const int MAX = 52;
	char alphabet[MAX] = {
		'a', 'b', 'c', 'd', 'e', 'f', 'g',
		'h', 'i', 'j', 'k', 'l', 'm', 'n',
		'o', 'p', 'q', 'r', 's', 't', 'u',
		'v', 'w', 'x', 'y', 'z',
		'A', 'B', 'C', 'D', 'E', 'F', 'G',
		'H', 'I', 'J', 'K', 'L', 'M', 'N',
		'O', 'P', 'Q', 'R', 'S', 'T', 'U',
		'V', 'W', 'X', 'Y', 'Z'
	};
	std::string line = "";
	for (int i = 0; i < chooice; i++)
		line = line + alphabet[rand()%MAX];
	return line;
}

std::string num_rand(int chooice) {
	const int MAX = 10;
	char number[MAX] = {
		'1','2','3','4','5',
		'6','7','8','9','0'
	};
	std::string line = "";
	for (int i = 0; i < chooice; i++)
		line = line + number[rand()%MAX];
	return line;
}

std::string super_rand(int chooice) {
	const int MAX = 76;
	char super[MAX] = {
		'a', 'b', 'c', 'd', 'e', 'f', 'g',
		'h', 'i', 'j', 'k', 'l', 'm', 'n',
		'o', 'p', 'q', 'r', 's', 't', 'u',
		'v', 'w', 'x', 'y', 'z',
		'A', 'B', 'C', 'D', 'E', 'F', 'G',
		'H', 'I', 'J', 'K', 'L', 'M', 'N',
		'O', 'P', 'Q', 'R', 'S', 'T', 'U',
		'V', 'W', 'X', 'Y', 'Z',
		'1', '2', '3', '4', '5', '6', '7',
		'8', '9', '0',
		'!', '@', '$', '%', '(', ')', '\\',
		'/', '?', '{', '}', '^', ':', ';'

	};
	std::string line = "";
	for (int i = 0; i < chooice; i++)
		line = line + super[rand()%MAX];
	return line;
}

int main() {
	int user_input;
	std::cout << "Welcome to Password Generator\n";
	std::cout << "1.Just Alphabet\n";
	std::cout << "2.Just Number\n";
	std::cout << "3.Alphabet, Number & Character\n";
	std::cout << "Insert Here: ";
	std::cin >> user_input;

	if (user_input == 1) {
		std::cout << "How long you want: ";
		std::cin >> user_input;
		if (std::cin.fail()) {
			std::cout << "Invalid Command!\n";
		}else {
			srand(time(0));
			std::cout << alpha_rand(user_input) << std::endl;
		}

	}else if (user_input == 2) {
		std::cout << "How long you want: ";
		std::cin >> user_input;
		if (std::cin.fail()) {
			std::cout << "Invalid Command!\n";
		}else {
			srand(time(0));
			std::cout << num_rand(user_input) << std::endl;
		}

	}else if (user_input == 3) {
		std::cout << "How long you want: ";
		std::cin >> user_input;
		if (std::cin.fail()) {
			std::cout << "Invalid Command!\n";
		}else {
			srand(time(0));
			std::cout << super_rand(user_input) << std::endl;
		}

	}else {
		std::cout << "Invalid Command!\n";
	}

}
