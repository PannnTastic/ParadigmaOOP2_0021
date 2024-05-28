#include <iostream>
using namespace std;

class abstraksi{
    private : 
        string x,y;
    public : 
        // method untk mengisi nilai
        // private untuk member
        void setxy(string a, string b){
            x=a;
            y=b;
        }
        //menampilkan nilai
        void display(){
            cout << "x = " << x << endl;
            cout << "y = " << y << endl;
        }
};