#include<iostream>
#include<string>
using namespace std;

int main(){
    struct {
        string car_brand;
        string car_model;
        int released_year;
    } myCar, friend_car;

    myCar.car_brand = "Ford";
    myCar.car_model = "Mustang";
    myCar.released_year = 1969;
    
    friend_car.car_brand = "BMW";
    friend_car.car_model = "X5";
    friend_car.released_year = 1999;

    cout<<"I drive "<<myCar.car_model<<" It was first released in "<<myCar.released_year<<endl;

    cout<<"My friend drive "<<friend_car.car_brand<<" It was first released in "<<friend_car.released_year;

    string food = "pizza";
    cout<<food<<endl;
    cout<<&food;
}