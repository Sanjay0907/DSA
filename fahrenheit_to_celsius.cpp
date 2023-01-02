#include <iostream>
using namespace std;

int main(){

    double tempInFahernheit,tempInCelcius;
    cout<<"Enter the Temp in Fahernheit to convert it to Celcius : ";
    cin>> tempInFahernheit;

    tempInCelcius= ((tempInFahernheit-32)*5)/9;

    cout<<"Celcius Temp is : "<<tempInCelcius;


}