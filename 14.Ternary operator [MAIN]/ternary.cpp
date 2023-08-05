#include <iostream>


using namespace std;



/*             true        :  false
 * condition ? expression1 : expression2;
 *
 *
*/

int main(){

    int num1, num2;
    
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    
    // Using ternary operator to find the maximum
    int max = (num1 > num2) ? num1 : num2;
    
    std::cout << "The maximum number is: " << max << std::endl;
    
    return 0;
}