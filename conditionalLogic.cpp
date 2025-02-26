#include <iostream>
#include <string>
using namespace std;

int main(){
    // int x = 43;
    // int y = 32;
    // if(x > y){
    //     cout<<"X is greater then y";
    // }else{
    //     cout<<"Y is greater then x";
    // }
    // int age = 22;
    // if(age < 18){
    //     cout<<"You are a teenager";

    // }else if(age < 40){
    //     cout<<"You are an adult";

    // }else {
    //     cout<<"You are older";
    // }

    // int time = 44;
    // string greeting = time <= 10 ? "Good Morning" : "Good AfterNoon";
    // cout<<greeting;

    int door_code = 33330;
    int userCode;
    cout<<"Enter door code please: ";
    cin>>userCode;

    if(userCode == door_code){
        cout<<"Welcome to your room"<<endl;

    }else{
        cout<<"Sala chor! Ja vag....."<<endl;
    }
}