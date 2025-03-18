#include<iostream>
#include<string>
using namespace std;

int main(){
    string food = "pizza";
    string* ptr = &food;

    cout<<food<<endl;
    cout<<&food<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl; //dereference : output the value food with its memory address
}