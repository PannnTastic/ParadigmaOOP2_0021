#include <iostream>
using namespace std;

class baseclass{
    public : 
        virtual void perkenalan(){
            cout << "Hallo saya Dari Base class";
        }
};

class derivedclass : public baseclass{
    public : 
        void perkenalan(){
            cout << "Hallo saya dari derived class";
        }
};