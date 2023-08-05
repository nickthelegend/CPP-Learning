#include <iostream>

int main() {
    int x = 5, y = 10;
    bool isTrue = true, isFalse = false;

    // Logical AND
    bool resultAnd = (x > 0) && (y < 20);  // true
    std::cout << "Logical AND Result: " << resultAnd << std::endl;

    // Logical OR
    bool resultOr = (x > 0) || (y > 20);   // true
    std::cout << "Logical OR Result: " << resultOr << std::endl;

    // Logical NOT
    bool resultNot = !isTrue;             // false
    std::cout << "Logical NOT Result: " << resultNot << std::endl;

    return 0;
}
