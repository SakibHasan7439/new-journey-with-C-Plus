// 3. Write a program in C++ that converts temperature values between Celsius, Fahrenheit, and Kelvin using function overloading.  Implement an overloaded function convertTemperature() with the following variations:
//  ■ convertTemperature(double celsius): Accepts a temperature in Celsius and  returns its equivalent in Fahrenheit.
//  ■ convertTemperature(double fahrenheit, char fToC): Accepts a temperature in   Fahrenheit and a character to specify that it should be converted to Celsius, returning the result.
//  ■ convertTemperature(double kelvin, bool isKelvin): Accepts a temperature in   Kelvin and a boolean isKelvin to indicate conversion to Celsius, returning the result.
// ***Celsius to Fahrenheit: F=C×(9/5)+32.  Fahrenheit to Celsius: C=(F−32)×(5/9)  Kelvin to Celsius: C=K−273.15.

#include <iostream>
using namespace std;

double convertTemperature(double celsius){
    return celsius * (9.0/5.0) + 32;
};

double convertTemperature(double fahrenheit, char fToC){
    return (fahrenheit - 32) * (5.0/9.0);
};

double convertTemperature(double kelvin, bool isKelvin){
    if(!isKelvin){
        return kelvin - 273.15;
    };
};

int main(){
    double celToFah = convertTemperature(22.5);
    cout<<"Today's temperature in fahrenheit is: "<<celToFah<<endl;

    double x;
    cin>>x;
    double fahToCel = convertTemperature(x, 'C');
    cout<<"Today's temperature in celsius is: "<<fahToCel<<endl;


    double kelToCel = convertTemperature(295.5, false);
    cout<<"Temperature converted from kelvin to celsius is: "<<kelToCel<<endl;
}
