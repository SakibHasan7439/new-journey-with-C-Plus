#include <iostream>
using namespace std;

float fahrenheitToCelsius(float fahrenheit){
    return (5.0 / 9.0) * (fahrenheit - 32.0);
};

int main(){
    float fahrenheit_value = 108.4;
    float result = fahrenheitToCelsius(fahrenheit_value);
    cout<<"Fahrenheit value: "<<fahrenheit_value<<endl;
    cout<<"Convert to celsius: "<<result;
}