#include <iostream>
using namespace std;

class MyClass {
    public :
        void myFunction(){
            cout<<"Some content from parent function \n";
        };
};

class MyAnotherClass {
    public :
        void myAnotherFunction(){
            cout<<"Im really a sleepy person. But i'm trying to be proactive \n";
        };
};

class MyChildClass:public MyClass, public MyAnotherClass{};

int main(){
    MyChildClass myObject;
    myObject.myFunction();
    myObject.myAnotherFunction();
}