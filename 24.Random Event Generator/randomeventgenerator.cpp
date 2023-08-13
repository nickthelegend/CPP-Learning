#include <iostream>
#include <ctime>

using namespace std;


int main(){



    srand(time(NULL));

    int randomnumber = (rand() % 6) + 1;
    switch (randomnumber){
        case 1 : cout<< "You Won A Ticket\n";
            break;
        case 2 : cout<< "You Won A Girlfriend\n";
            break;
        case 3 : cout<< "You Won A GayFriend\n";
            break;
        case 4 : cout<< "You Won A Cute Girl\n";
            break;
        case 5 : cout<< "You Won A SadGuy\n";
            break;
        case 6 : cout<< "You Won A SADAF\n";
            break;
    }
    // cout <<randomnumber <<endl;
}