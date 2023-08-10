#include <iostream>

int main() {
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 10; ++j) {
            std::cout << i << " * " << j << " = " << (i * j) << "\t";
        }
        std::cout << "\n";
    }
    return 0;
}


////In this example, the outer loop iterates through values of i from 1 to 5, and for each i, the inner loop iterates through values of j from 1 to 10, printing the multiplication table. 