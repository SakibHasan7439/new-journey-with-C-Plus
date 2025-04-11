#include<iostream>
#include<string>
using namespace std;

class MyBike {
    public :
        int speed(int maxSpeed);
};

int MyBike::speed(int maxSpeed){
    return maxSpeed;
};

int main(){
    int speed = 300;
    MyBike myObj;
    cout<<"Max speed is: "<<myObj.speed(speed);
}