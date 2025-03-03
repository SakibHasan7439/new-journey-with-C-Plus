#include <iostream>
using namespace std;

class Teacher {

    string name, short_code, address;
    Teacher(string n, string sc, string addr, double sal) {
        name = n;
        short_code = sc;
        address = addr;
        salary = sal;
    }
    
    void display() {
        cout << "Name: " << name << endl;
        cout << "Short Code: " << short_code << endl;
        cout << "Address: " << address << endl;
        cout << "Salary: " << salary << endl;
    }
    
    double getSalary() {
        return salary;
    }
    
    string getShortCode() {
        return short_code;
    }

private:
    double salary;
};

int main() {
    // Creating an array of 10 Teacher objects
    Teacher teachers[10] = {
        {"John Doe", "T001", "New York", 5000},
        {"Jane Smith", "T002", "Los Angeles", 5200},
        {"Alice Brown", "T003", "Chicago", 4800},
        {"Bob Johnson", "T004", "Houston", 5100},
        {"Charlie White", "T005", "Phoenix", 5300},
        {"David Green", "T006", "Philadelphia", 4900},
        {"Emma Wilson", "T007", "San Antonio", 4700},
        {"Frank Clark", "T008", "San Diego", 5000},
        {"Grace Lee", "T009", "Dallas", 5500},
        {"Henry Lewis", "T010", "San Jose", 5600}
    };

    // User input to search for a teacher
    string search_code;
    cout << "Enter Short Code to search for a Teacher: ";
    cin >> search_code;

    bool found = false;
    for (int i = 0; i < 10; i++) {
        if (teachers[i].getShortCode() == search_code) {
            cout << "\nTeacher Found:\n";
            teachers[i].display();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Teacher with Short Code " << search_code << " not found.\n";
    }

    double totalSalary = 0;
    for (int i = 0; i < 10; i++) {
        totalSalary += teachers[i].getSalary();
    }
    double avgSalary = totalSalary / 10;

    cout << "\nAverage Salary of Teachers: " << avgSalary << endl;

    return 0;
}
