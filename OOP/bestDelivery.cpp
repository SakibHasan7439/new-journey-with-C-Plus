#include <iostream>
using namespace std;

class Courier2;
class Courier1 {
    int deliveryTime;
    float cost;
    float successRate;

    public :
        Courier1(int dt, float ct, float sr){
            deliveryTime = dt;
            cost = ct;
            successRate = sr;
        };

        friend void BestCourier(Courier1 cr1, Courier2 cr2);
};

class Courier2 {
    int deliveryTime;
    float cost;
    float successRate;

    public :
        Courier2(int dt, float ct, float sr){
            deliveryTime = dt;
            cost = ct;
            successRate = sr;
        };

        friend void BestCourier(Courier1 cr1, Courier2 cr2);
};

void BestCourier(Courier1 cr1, Courier2 cr2){
    bool validA = cr1.successRate > 90.0;
    bool validB = cr2.successRate > 90.0;

    if(!validA && !validB){
        cout<<"No reliable courier available."<<endl;
        return;

    }else if(validA && !validB){
        cout<<"You can go with Courier1";
        return;

    }else if(!validA && validB){
        cout<<"You can go with Courier2";
        return;
    };

    if (cr1.deliveryTime < cr2.deliveryTime)
        cout<< cr1.deliveryTime;
    else if (cr2.deliveryTime < cr2.deliveryTime)
    cout<< cr2.deliveryTime;
    else {
        // If delivery times are equal, compare cost
        if (cr1.cost < cr2.cost)
        cout<< "You can choose Courier1"<<endl<<"Courier1 Info: "<<cr1.deliveryTime<<endl<<cr1.cost<<endl<<cr1.successRate;
        else {
            cout<< "You can choose Courier2"<<endl<<"Courier2 Info: "<<cr2.deliveryTime<<endl<<cr2.cost<<endl<<cr2.successRate;
        }
        
    };
};

int main(){
    Courier1 cr1(5, 40.39, 90.3);
    Courier2 cr2(5, 74.39, 90.4);
    BestCourier(cr1, cr2);
};