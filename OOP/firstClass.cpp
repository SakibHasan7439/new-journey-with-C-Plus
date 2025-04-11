#include<iostream>
#include<string>
using namespace std;

class Car {
    public:
        string brand;
        string model;
        int manufacturing_date;
};

int main(){
    Car myCar;
    myCar.brand = "Ford";
    myCar.model = "Mustang";
    myCar.manufacturing_date = 1964;
    cout<<"I love "<<myCar.model<<" Its brand is "<<myCar.brand<<endl<<"It was made in "<<myCar.manufacturing_date<<endl;
}