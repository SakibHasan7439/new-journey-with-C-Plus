#include<iostream>
using namespace std;

class Employee {
    private:
        int salary;
    
    public:
        void setSalary(int s){
            salary = s;
        };

        int getSalary(){
            return salary;
        };
};

int main(){
    Employee ourEmployeeObj;
    ourEmployeeObj.setSalary(50000);
    cout<<"Employee salary: "<<ourEmployeeObj.getSalary();
}