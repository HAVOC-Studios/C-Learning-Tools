#include <iostream>

// Type conversion is a conversion of a value of one data type to another 
// Implicit = automatic
// Explicit = Precede value with new data type

int main() {
	// Simple example
	//double x = (int) 3.14;
	//std::cout << x;

	// 100 in ASCII Table represents as d
	// Implicit example 
	//char x = 100; 
	//std::cout << x;
	// Or
	// Explicit example 
	//std::cout << (char)100;

	int correct = 8;
	int questions = 10;

	double score = correct / (double)questions * 100;

	std::cout << score << "%";

	return 0;
}
