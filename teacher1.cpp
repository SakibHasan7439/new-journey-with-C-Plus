// 1. Create a Teacher class with public attributes Name, Short_code, Address, and a private attribute salary. Initialize the attributes for 10 objects of the Teacher class. Now find a specific teacher based on the short code (Given by user) and print the details of that Teacher. Also find the average salary of the teachers.

#include <iostream>
#include <string>
using namespace std;

class Teacher {
    public:
        string Name;
        string Short_code;
        string Address;

    Teacher(string teacherName, string teacher_short_code, string add, int sal){
        Name = teacherName;
        Short_code = teacher_short_code;
        Address = add;
        salary = sal;
    };

    int getSalary() const {
        return salary;
    };

    private:
        int salary;
};

int main(){
    Teacher teachers[10] = {
        Teacher ("Ashfiya Keya", "AK202", "Mirpur-10", 80000),
        Teacher ("Adnan shakib", "AS000", "Mirpur-12", 100000),
        Teacher ("Khairul Islam", "KI101", "Dhanmondi", 60000),
        Teacher ("Aminul Islam", "AI102", "Mirpur-10", 70000),
        Teacher ("Nazrul Islam", "Ni001", "Rajshahi", 120000),
        Teacher ("Alauddin parag", "AP111", "Pabna", 50000),
        Teacher ("Abdul muttalib", "AM202", "Pabna", 40000),
        Teacher ("Rahat Bin Priyo", "RP202", "Barishal", 100000),
        Teacher ("Sonjoy", "S202", "Brammonbaria", 100000),
        Teacher ("Tariquzzaman", "T202", "Mohammadpur", 80000),
    };
    
    string user_Short_code;
    cout<<"Enter a short_code to find required teacher: ";
    cin>>user_Short_code;

    bool code_Found = false;
    for(int i = 0; i <= 10; i++){
        if(teachers[i].Short_code == user_Short_code){
            code_Found = true;
            cout<<"Teacher Details: "<<endl;
            cout<<teachers[i].Name<<endl;
            cout<<teachers[i].Short_code<<endl;
            cout<<teachers[i].Address<<endl;
        };
    };

    if(!code_Found){
        cout<<"Teacher not found!"<<endl;
    };

    // calculate total salary
    int total_salary = 0;
    for(int i = 0; i < sizeof(teachers)/sizeof(teachers[0]); i++){
        total_salary += teachers[i].getSalary();
    }

    double teachers_average_salary = total_salary / (sizeof(teachers)/sizeof(teachers[0]));
    cout<<"teachers average Salary: "<<teachers_average_salary<<endl;

};