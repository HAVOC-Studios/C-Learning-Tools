#include <iostream>

// Namespaces provide a solution for preventing name conflicts in large projects. 
// Each entity needs a unique name. 
// A namespace allows for identically named enitites as long as the namespaces are different.

using std::cout;

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main() {
    using namespace first;
    cout << x;
    // cout << first::x; // Using the scope resolution operator we can access outside of the function
    // cout << second::x; // Using the scope resolution operator we can access outside of the function
    return 0;
}
