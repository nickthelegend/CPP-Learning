#include <iostream>


using namespace std;


int main(){
std::string name ;
while  (name.empty()){


    std::cout << "Enter Your Name:"<<endl;
    std::getline(std::cin,name);
} ///will execute as long as name is empty


///will execute this code if the name is not empty

std::cout<<"Hello "<<name<<endl;

    return 0;
}