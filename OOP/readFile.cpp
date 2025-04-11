#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string myText;
    ifstream myReadFile("fileName.txt");
    while(getline(myReadFile, myText)){
        cout<<myText;
    };

    myReadFile.close();
}