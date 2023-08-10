#include <iostream>


using namespace std;



int main(){

    for (int i = 0; i < 20 ; i++){

        if (i== 5 ){

            break;
            ////this will break the loop if the i value is equal to 5
        }
        cout<<i<<endl;


    }

    for (int i = 0; i < 20 ; i++){

        if (i== 5 ){
            cout<<"Skipping the value of 5" << endl;

            continue;
        }
        cout<<i<<endl;


    }

    return 0;
}