#include <iostream>
#include <vector>
// typedef is a reserver keyword used to create an additional name (alias) for another data type. 
// New identifieer for an existing type helps with readability and reduces typos
// Used when there is a clear benefit
// Replaced with "using" (Works better with templates)

// typedef std::vector<std::pair<std::string, int>> pairlist_t; A little bit complicated just for now..

// USING TYPEDEF
//typedef std::string text_t;
//typedef int number_t;

// USING USING
using text_t = std::string;
using number_t = int;

int main() {
    text_t firstName = "Jay";
    number_t age = 21;

    std::cout << firstName << "\n";
    std::cout << age << "\n";


    return 0;
}
