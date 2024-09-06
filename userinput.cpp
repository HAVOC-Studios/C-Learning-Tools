
#include <iostream>

// cout << (Insertion operator)
// cin >> (Extraction Operator)

int main() {
	std::string name;
	int age;

	std::cout << "What's your full name?: ";

	std::cout << "What's your age?: ";
	std::cin >> age;

	std::cout << "Hello " << name << "\n";
	std::cout << "You are " << age << " years old";

	return 0;
}
