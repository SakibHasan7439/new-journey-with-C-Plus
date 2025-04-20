#include<iostream>
using namespace std;

class Rectangle2;
class Rectangle1 {
    double length;
    double width;
    
    public :
        Rectangle1(double len, double w){
            length = len;
            width = w;
        };

        friend void IsEqualArea(Rectangle1 rect1, Rectangle2 rect2);
};

class Rectangle2 {
    double length;
    double width;

    public :
        Rectangle2(double len, double w){
            length = len;
            width = w;
        };
        friend void IsEqualArea(Rectangle1 rect1, Rectangle2 rect2);
};

void IsEqualArea(Rectangle1 rect1, Rectangle2 rect2){
    double area1 = rect1.length * rect1.width;
    double area2 = rect2.length * rect2.width;
    if(area1 > area2){
        cout<<"The area of Rectangle1 is greater then Rectangle2.";
    }else {
        cout<<"The area of Rectangle2 is greater then Rectangle1.";
    };
};

int main(){
    Rectangle1 rec1(5.7, 3.6);
    Rectangle2 rec2(4.7, 8.9);
    IsEqualArea(rec1, rec2);
};