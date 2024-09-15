#include <iostream>

int main() {
    // Declaring a constant integer using `const int`
    const int a1 = 1;

    // Declaring a constant integer using `int const`
    int const a2 = 1;

    // Output the values of a1 and a2
    std::cout << "Value of a1: " << a1 << std::endl;
    std::cout << "Value of a2: " << a2 << std::endl;

    // Trying to modify the values will result in a compile-time error
    // Uncommenting the following lines will cause errors
    // a1 = 2; 
    // a2 = 2;

    return 0;
}
