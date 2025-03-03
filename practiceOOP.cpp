#include <iostream>
using namespace std;

class Electricity{
    public:
    int customer_id;
    int units_consumed;

    int calculate_bill(){
        int total_bill_amount;
        if(units_consumed > 100){
            total_bill_amount = units_consumed * 7;
            return total_bill_amount;

        }else {
            total_bill_amount = units_consumed * 7;
            return total_bill_amount;
        }
    }

    void display_bill_details(){
        cout<<"Customer id: "<<customer_id<<endl;
        cout <<"Units consumed: "<<units_consumed<<endl;
        // cout<<"Bill Amount: "<<bill_amount<<endl;
    }

    ~Electricity(){
        cout<<"destroy the class";
    };

};
int main(){
    Electricity myBill;
    myBill.customer_id = 130;
    myBill.units_consumed = 120;
    myBill.display_bill_details();
    myBill.calculate_bill();
}