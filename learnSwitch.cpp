#include <iostream>
using namespace std;

int main(){
    int day = 6;
    switch (day)
    {
    case 6:
        cout<<"Today is Saturday";
        break;
    
    case 7:
        cout<<"Today is Sunday";
        break;
    
    default:
        cout<<"We are looking for weekend";
        break;
    }
}