#include <iostream>
#include <queue>
#include <time.h>
#include <windows.h>
using namespace std;

int menu1(){
    cout << "halo";
}

void view(){
    queue <int> antrian;
    
}


int main(){
    cout << "\t Selamat Datang di Bank NGAB\n\n";
    cout << "Pilih Menu\n";
    cout << "1. Masukan antrian\n";
    cout << "2. Exit\n";

    int menu;

    cin >> menu;

    if(menu == 1) menu1();
    else if(menu == 2) exit(0);
    else cout << "pilih yg bnr ege";


    return 0;
}