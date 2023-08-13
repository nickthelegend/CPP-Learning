#include <iostream>



using namespace std;



int main(){

string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
///this is used to decleare a array


/*
to print all the values in the array you have to learn how to looop through an array

*/



for (int i=0; i < sizeof(cars) / sizeof(cars[0]);i++){


    cout<< i << ".Element is " << cars[i] <<endl;



}





/*

ForEach Loop

*/




for (string car : cars){

    cout<< "Element is " << car<< endl;


}



}