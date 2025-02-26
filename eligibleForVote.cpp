#include <iostream>
#include <string>
using namespace std;

int main(){
    int voting_age = 18;
    string country = "Bangladeshi";
    int user_age;
    string nationality;
    cout<<"Please enter your age: ";
    cin>>user_age;
    cout<<"Your country name: ";
    cin>>nationality;

    if((nationality == country) && (user_age >= voting_age)){
        cout<<"Yes! You are eligible for vote.";

    }else if((nationality == country) && (user_age < voting_age)){
        cout<<"Ole le le le........ babu tomar ekhono boyosh hoy nai!";

    }else{
        cout<<"Sorry! You are not a citizen of this Country.";
    }
}