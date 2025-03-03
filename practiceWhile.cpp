#include <iostream>
using namespace std;

int main(){
    int dice = 1;
    while(dice <= 6){
        if(dice < 6){
            cout<<"No Yatzy"<<endl;
        }else{
            cout<<"Yatzy"<<endl;
        };
        dice += 1;
    };

    return 0;
}