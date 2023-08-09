#include <iostream>
#include <string>


using namespace std;


int main(){
    double farenheit,celsuis;
    int input1;
    cout << "You want to convert : \n 1.Farenheit to celsuis \n 2.Celsius to farenheit"<<endl;
    cin >>input1;
    if(input1==1){

        cout<<"What is fareheit"<<endl;
        cin>>farenheit;
        celsuis = (farenheit-32)*5.0 / 9.0;
        cout<<"Your Temp is "<<celsuis<<"C";


    }else if (input1==2){
    cout<<"What is celsuis??: ";
    cin>> celsuis;
    farenheit = (celsuis * 9.0 / 5.0) +32;
    cout<<"Your Temp is "<<farenheit<<"F";
    }
    

}