#include<iostream>
using namespace std;

// constructor parameter
class MyBike {
    public:
        string brand;
        string model;
        int manufacturing_date;
        MyBike(string x, string y, int z){
            brand = x;
            model = y;
            manufacturing_date = z;
        };
};

int main(){
    MyBike amarBike("Yamaha", "R15V4", 2023);
    cout<<"I ride a "<<amarBike.brand<<amarBike.model<<endl<<" It was released in "<<amarBike.manufacturing_date;
}