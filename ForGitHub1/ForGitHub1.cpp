#include <iostream>

using namespace std;

int main() {

	int a;
	int b;

	cout << "Write your first number down below: " << endl;
	cin >> a;
	cout << "Write your second numder down below: " << '\n';
	cin >> b;

	int c;

	c = a + b;

	if (c < 10) {

		cout << "The sum of ur two numbers is less than 10" << '\n';
		cout << "The sum is " << c << '\n';
	}
	else if (c == 10) {

		cout << "The sum of ur two numbers is 10" << '\n';
		cout << "The sum is " << c << '\n';
	}
	else {

		cout << "The sum of ur two numbers is greater than 10" << '\n';
		cout << "The sum is " << c << '\n';
	}

	return 0;

}