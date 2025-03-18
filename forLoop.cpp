#include<iostream>
#include<string>
using namespace std;

int main(){
    // for(int i = 0; i <= 5; ++i){
    //     cout<<"value is: "<<i<<endl;
    //     for(int j = 0; j <= 3; ++j){
    //         cout<<"value is: "<<j<<endl;
    //     };
    // };

    // int myNumbers[5] = {10, 20, 30, 40, 50};
    // int sum = 0;
    // for(int i : myNumbers){
    //     sum += i;
    // };

    // cout<<"The sum is: "<<sum;

    // int number;
    // cout<<"Enter a number: ";
    // cin>>number;

    // for(int i = 1; i <= 10; i++){
    //     cout<<number<< " X "<< i << "= "<< number * i <<endl;
    // }
    string players[5] = {"Tamim", "Maxwell", "Shanto", "Taskin", "Nahid"};
    for(int i = 0; i <= sizeof(players); i++){
        if(players[i][0] == 'S'){
            continue;
        }
        cout<<players[i]<<endl;
    }
}