#include <iostream>
using namespace std;

void add(int a, int b){
    cout<<"The sum is: "<<a+b<<endl;
}

void add(int a, int b, int c){
    cout<<"The sum is: "<<a+b<<endl;
}

void add(float a, float b){
    cout<<"The sum is: "<<a+b<<endl;
}

int main(){
    add(3, 6);
    add(3.5f, 6.5f);
    add(4.3, 5.7);
}