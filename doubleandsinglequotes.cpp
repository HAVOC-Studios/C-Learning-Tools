#include <iostream>

// Define a namespace
namespace Example {

    void demonstrateQuotes() {
        // Single quotes are used for single characters
        char singleQuoteChar = 'A'; // 'A' is a single character
        std::cout << "Single quoted character: " << singleQuoteChar << std::endl;

        // Double quotes are used for strings (arrays of characters)
        const char* doubleQuoteString = "Hello, World!"; // "Hello, World!" is a string literal
        std::cout << "Double quoted string: " << doubleQuoteString << std::endl;

        // Demonstrating that single quotes can't be used for strings
        // Uncommenting the following line will cause a compilation error
        // char invalidString[] = 'This is not valid'; // Error: single quotes cannot be used for strings

        // Demonstrating that double quotes can't be used for single characters
        // Uncommenting the following line will cause a compilation error
        // char invalidChar = "A"; // Error: double quotes are used for strings, not single characters
    }

} // namespace Example

int main() {
    Example::demonstrateQuotes();
    return 0;
}
