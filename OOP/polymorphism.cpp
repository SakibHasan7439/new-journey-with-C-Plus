#include<iostream>
using namespace std;

class Animal {
    public :
        void animalSound(){
            cout<<"The animal make sound. \n";
        };
};

class Cat:public Animal {
    public :
        void animalSound(){
            cout<<"The cat sounds 'meows' \n";
        };
};

class Dog:public Animal {
    public :
    void animalSound(){
        cout<<"The Dog sounds 'Bow wow' \n";
    };
};

int main(){
    Animal myAnimal;
    Cat myCat;
    Dog myDog;
    myAnimal.animalSound();
    myCat.animalSound();
    myDog.animalSound();
};