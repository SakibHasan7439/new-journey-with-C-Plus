#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;

    int max;
    if(b > a && b > c){
        max = b;
    }else if( c > b){
        max = c;
    }else{
        max = a;
    };

    cout<<"max value is: "<<max;
}