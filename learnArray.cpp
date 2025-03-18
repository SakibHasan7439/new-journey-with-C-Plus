#include<iostream>
#include<string>
using namespace std;

int main(){
    string myArr[5] = {"Apple", "Banana", "Mango", "Pineapple", "Avocado"};
    for(int i = 0; i < sizeof(myArr)/sizeof(myArr[0]); i++){
        cout<<"Fruit name: "<<myArr[i]<<endl;
    }
}