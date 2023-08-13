#include <iostream>


using namespace std;


int main(){



    int num;
    int guess;
    int tries = 0;


    srand (time(NULL));
    num = (rand() % 100) + 1; ///this will generate a number from 1 to 100 
    cout << "******** NUmber guessing game";



    do {


        cout << "Enter A guess between 1 to 100:"<<endl;
        cin >> guess;
        cout<<"Incorret the correct number was "  << num<<endl;
        tries++;
        cout<<"Number of Tries = " <<tries<<endl;
    }while(guess != num);

    cout << "Your Guess is correct Here Your KEY: SADAF-" << rand() % 102332 ;


}