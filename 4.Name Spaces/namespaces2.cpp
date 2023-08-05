#include <iostream>


namespace Math {
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }
} 

int main(){

using namespace Math;

int result = add(5, 3);
    std::cout << "Result: " << result << std::endl;
    
    return 0;



}