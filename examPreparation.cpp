// Function Overloading
// Overload the functions to calculate the area of circle, rectangle and triangle. When you pass the radius the area of the circle will be calculated, when you pass the length and width the area of the rectangle will be Calculated. When you pass base and height the area of the triangle will be calculated. Area of triangle: (base*height)/2 

#include<iostream>
using namespace std;

double calculator(int radius){
    return 3.1416 * (radius * radius);
}

int calculator(int length, int width){
    return length * width;
}

double calculator(double base, int height){
    return (base * height)/2;
}

int main(){
    double calculateCircle = calculator(8);
    cout<<"The area of this circle is: "<<calculateCircle<<endl;
    
    int calculateRectangle = calculator(5, 7);
    cout<<"The area of this rectangle is: "<<calculateRectangle<<endl;
    
    double calculateTriangle = calculator(2.5, 9);
    cout<<"The area of this Triangle is: "<<calculateTriangle<<endl;

    string first = "Amar nam ";
    string last = "Zayed";
    string fullName = first + last;
    cout<<fullName<<endl;
}

