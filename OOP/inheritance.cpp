// drive-class --> Child class
// base-class--> parent class
#include<iostream>
using namespace std;

class ParentClass {
    public :
        void parent(){
            cout<<"Some content from parent class.";
        };
};

class MyChild:public ParentClass{};
class MyGrandChild:public MyChild{};

int main(){
    MyGrandChild myObject;
    myObject.parent();
}