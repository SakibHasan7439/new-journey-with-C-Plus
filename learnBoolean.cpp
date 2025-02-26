#include <iostream>
using namespace std;
int main(){
    int myAge = 17;
    int eligibleToVote = 18;

    if(myAge < eligibleToVote){
        cout<<"You are not eligible for vote!";

    }else{
        cout<<"You can vote.";
    }
}