#include<iostream>
#include<string>
using namespace std;

// void my_info(string name, int age, string designation){
//     cout<<"I am "<<name<<". Now im "<<age<<" years old and Im a "<<designation<<endl;
// }
// int main(){
//     my_info("Sakib", 22, "Frontend developer");
//     my_info("Nazmul", 30, "Backend developer");
//     my_info("Shakil", 30, "Fullstack developer");
// }

// int myFunction(int num1, int num2){
//     return num1 * num2;
// }

// int main(){
//     cout<<"The result is: "<<myFunction(10, 32);
// }

// void swapFunction (int &x, int &y){
//     int z = x;
//     x = y;
//     y = z;
// };

// int main(){
//     int firstNum = 100;
//     int secondNum = 50;
//     cout<<"Before swap: "<<firstNum<<secondNum<<endl;
//     swapFunction(firstNum, secondNum);
//     cout<<"After swap: "<<firstNum<<secondNum;
// }

void arrFunction(int myNumbers[6]){
    for(int i = 0; i < 6; i++){
        cout<<myNumbers[i] * 2<<endl;
    }
}

int main(){
    int numbers[6] = {3, 5, 7, 9, 1, 6};
    arrFunction(numbers);
}