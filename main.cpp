#include "iostream"
#include "nyawa.hpp"
#include "pertanyaan.hpp"
using namespace std;
int main(){
    int menu;
    //wip menu utama
    cout<<"---------------------------------------------\n";
    cout<<"--------------------Mulai--------------------\n";
    cout<<"-------------------Tentang-------------------\n";
    cout<<"--------------------Keluar-------------------\n";
    cout<<"---------------------------------------------\n";
    cin>>menu;

    switch (menu) {
        case 1:
            tampilkanNyawa();
            break;
        case 2:
            break;
    }




}