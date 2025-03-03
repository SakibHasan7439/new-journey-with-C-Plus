#include <iostream>
#include <string>
using namespace std;

void order(string dish1, string dish2){
    cout<<"Order confirm for: "<<dish1<<" "<<dish2<<endl;
}

void order(string dish1, string dish2, string dish3){
    cout<<"Order confirm for: "<<dish1<<" "<<dish2<<" "<<dish3;
}

int main(){
    order("fish", "meat");
    order("fish", "meat", "curry");
}