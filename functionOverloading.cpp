#include<iostream>
using namespace std;

int plusFunction(int x, int y){
    return x + y;
}

double plusFunction(double a, double b){
    return a + b;
}

int main(){
    int number1 = plusFunction(4, 6);
    double number2 = plusFunction(3.54, 4.43);
    cout<<"Sum of int numbers: "<<number1<<endl;
    cout<<"Sum of double numbers: "<<number2;
}