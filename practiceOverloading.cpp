#include <iostream>
using namespace std;

void area(float length){
    cout<<"The square is: "<<length * length<<endl;
}

void area(double pi, float radius){
    cout<<"The circle is: "<<pi * (radius * radius)<<endl;
}

int main(){
    area(6.4f);
    area(3.1416, 3.5f);
}