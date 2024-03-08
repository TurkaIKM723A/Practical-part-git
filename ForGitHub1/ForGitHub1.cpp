#include <iostream>

int main() {

	int a;
	int b;

	std::cout << "Write your first number down below: " << std::endl;
	std::cin >> a;
	std::cout << "Write your second numder down below: " << '\n';
	std::cin >> b;

	int c;

	c = a + b;

	if (c < 10) {

		std::cout << "The sum of ur two numbers is less than 10" << '\n';
		std::cout << "The sum is " << c << '\n';
	}
	else if (c == 10) {

		std::cout << "The sum of ur two numbers is 10" << '\n';
		std::cout << "The sum is " << c << '\n';
	}
	else {

		std::cout << "The sum of ur two numbers is greater than 10" << '\n';
		std::cout << "The sum is " << c << '\n';
	}

	return 0;

}