#include<iostream>
#include<string>
using namespace std;

int main(){
    int ages[5] = {25, 23, 22, 15, 26};
    float avg, sum = 0;
    int i;

    int length = sizeof(ages)/sizeof(ages[0]);

    for(int age:ages){
        sum += age;
    };

    avg = sum / length;

    cout<<"The average age is: "<<avg;

    return 0;
}