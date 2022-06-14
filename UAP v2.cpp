#include <iostream>
#include <queue>
#include <time.h>
#include <windows.h>
using namespace std;

int temp;

void view2(){
	queue <int> antrian2;
    int x=0;
    int menu;
	
	cout<<"List antrian sekarang : \n";
	
    for(int i = 1; i <= temp; i++){
        antrian2.push(i);
        x++;
    }
        
    for(int j = 1; j <= x; j++){
        while (!antrian2.empty()) {
            cout<< antrian2.front()<<"\t";
            antrian2.pop();
            Sleep(500);
        }
    }
    	cout << endl<<endl;
        cout << "\t Selamat Datang di Bank NGAB\n\n";
        cout << "Pilih Menu\n";
        cout << "1. Masukan antrian\n";
        cout << "2. Exit\n";
}

void view(){
    queue <int> antrian;
    int x=0;
    int menu;

	cout<<"List antrian sekarang : \n";
	
    for(int i = 0; i <= 5; i++){
        antrian.push(i);
        x++;
    }
        
    for(int j = 0; j <= x; j++){
        while (!antrian.empty()) {
            cout<< antrian.front()<<"\t";
            antrian.pop();
            Sleep(500);
        }
    }
    	cout << endl<<endl;
        cout << "\t Selamat Datang di Bank NGAB\n\n";
        cout << "Pilih Menu\n";
        cout << "1. Masukan antrian\n";
        cout << "2. Exit\n";

    cin >> menu;

    if(menu == 1) {
    	antrian.push(x);
    	temp=antrian.front();
    	system("CLS");
    	view2();
    	
	}
    else if(menu == 2) exit(0);
    else cout << "pilih yg bnr ege";
}

int main(){
    view();cout<<endl;

    return 0;
}
