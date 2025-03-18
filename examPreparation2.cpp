// 2. Create a class called Manager with the following attributes: name, dept, unique_ID. Overload the constructors (default, parameterized, and copy constructor). Create three objects of the manager class to invoke three constructors.

#include <iostream>
#include <string>
using namespace std;

class Manager{
    public :
    string name;
    string dept;
    long long unique_ID;

    // default constructor
    Manager(){
        name = "Sakib";
        dept = "CSE";
        unique_ID = 20244203130;
    };

    // parameterize constructor
    Manager(string n, string d, long long id){ //long diye boro number input neya hoy
        name = n;
        dept = d;
        unique_ID = id;
    };

    // copy constructor
    // &m constructor copy kora hoy
    Manager(const Manager &m){
        name = m.name;
        dept = m.dept;
        unique_ID = m.unique_ID;
    };
};

int main(){
    Manager manager1;
    cout<<"First manager bio: "<<manager1.name<<" "<<manager1.dept<<" "<<manager1.unique_ID<<endl;

    Manager manager2("Tuhin", "CSE", 20244203093);
    cout<<"second manager bio: "<<manager2.name<<" "<<manager2.dept<<" "<<manager2.unique_ID<<endl;

    Manager manager3 = manager2;
    cout<<"third manager bio: "<<manager3.name<<" "<<manager3.dept<<" "<<manager3.unique_ID;
}