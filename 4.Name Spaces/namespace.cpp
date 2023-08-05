/*
*A namespace is like a container that holds related entities. You can define multiple namespaces in your C++ program, each with its own set of identifiers. To use a particular entity from a namespace, you must either qualify the entity's name with the namespace or bring the entire namespace into scope using the using directive.
*
*
*
*
*/

#include <iostream>

namespace Math {
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }
} 



////Name Space is Declared here its like a container that hodlds some methods and do somethings

int main() {
    int result = Math::add(5, 3);
    std::cout << "Result: " << result << std::endl;
    
    return 0;
}