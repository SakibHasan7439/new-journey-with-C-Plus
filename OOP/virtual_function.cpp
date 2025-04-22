#include<iostream>
#include<vector>
using namespace std;

class Enemy {
    public :
        virtual void attack(){
            cout<<"Enemy attacked!"<<endl;
        };

        virtual ~Enemy(){};
};

class Zombie : public Enemy{
    public :
        void attack() override {
            cout<<"Zombie is coming to attack you!"<<endl;
        };
};

class Vampire : public Enemy {
    public :
        void attack() override {
            cout<<"Zombie is coming to drain your blood!";
        };
};

int main(){
    vector<Enemy*> enemies; //creating a list with different enemy classes;
    enemies.push_back(new Zombie);
    enemies.push_back(new Vampire);

    for(Enemy* e : enemies){
        e->attack();
    }

    for(Enemy* e : enemies){
        delete e;
    }
};