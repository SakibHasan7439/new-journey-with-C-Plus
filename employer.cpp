// 2. Create a class Employee with: Public attributes: Emp_ID, Name, Department and Private attribute: Salary.
// Tasks:

// * Initialize 10 Employee objects with random data.
// * Search for an Employee by Emp_ID and print details.
// * Find and print the Employee with the highest salary.

#include <iostream>
#include <string>
using namespace std;

class Employee {
    public:
        string Name;
        string Department;
        int Emp_ID;

    Employee(
        string emp_name, 
        string emp_department, 
        int emp_id, 
        int emp_salary
    ){
        Name = emp_name;
        Department = emp_department;
        Emp_ID = emp_id;
        Salary = emp_salary;
    };

    int getSalary()const{
        return Salary;
    };

    private:
        int Salary;
};

int main(){
    Employee employees[6] = {
        Employee ("Tuhin", "Management", 001, 140000),
        Employee ("Joni", "Management", 002, 130000),
        Employee ("Kamruzzaman", "Technical", 003, 120000),
        Employee ("Tokio", "Technical", 004, 110000),
        Employee ("Shohag", "Technical", 005, 120000),
        Employee ("Shourov", "Technical", 006, 120000)
    };

    int user_input_id;
    cout<<"Pass a employee id: ";
    cin>>user_input_id;

    int arrayLength = sizeof(employees)/sizeof(employees[0]);
    for(int i = 0; i < arrayLength; i++){
        if(employees[i].Emp_ID == user_input_id){
            cout<<"Employee details: "<<endl;
            cout<<"Employee Name: "<<employees[i].Name<<endl;
            cout<<"Employee Department: "<<employees[i].Department<<endl;
        };
    };

    // get highest salary
    int max_salary = 0;
    for(int x = 0; x < arrayLength; x++){
        if(employees[x].getSalary() > max_salary){
            max_salary = employees[x].getSalary();
        };
    };

    cout<<"Highest salary is: "<<max_salary;
}