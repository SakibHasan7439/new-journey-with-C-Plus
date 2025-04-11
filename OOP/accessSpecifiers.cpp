#include<iostream>
using namespace std;

// class SumNumbers {
//     public :
//         int x;
//     private :
//         int y;
// };

// int main(){
//     SumNumbers myNumbers;
//     myNumbers.x = 20;
//     myNumbers.y = 30;
// }

class Employee {
    protected :
        int salary;
};

class Programmer:public Employee {
    public :
        int bonus;
        void setSalary(int s){
            salary = s;
        };

        int getSalary(){
            return salary;
        };
};

int main(){
    Programmer myObject;
    myObject.bonus = 5000;
    myObject.setSalary(20000);
    cout<<"Programmer starting salary is: "<<myObject.getSalary()<<endl;
    cout<<"He got "<<myObject.bonus<<" taka bonus in this month";
}