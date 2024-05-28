#include <iostream>
using namespace std;

class remotelampu{
    private : 
        string saklarno[10];
    public : 
        void setsaklarno(int i, string value){
            saklarno[i] = value;
        }
        string getsaklarno (int i){
            return saklarno [i];
        }
};

int main (){
    remotelampu lampu;

    lampu.setsaklarno(0, "Lampu Teras");
    lampu.setsaklarno(1, "lampu ruang tamu");
    lampu.setsaklarno(2, "Lampu kamar tidur");
    lampu.setsaklarno(3, "Lampu Dapur");
}