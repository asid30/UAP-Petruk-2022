#include <iostream>
#include <queue>
#include "windows.h"
#include <conio.h>
#define max 50

using namespace std;

queue <int> antrian;
int order = 1;

void menu1(){
    if(antrian.size() >= max)	cout<< "Antrian penuh, sampai bertemu di antrian besok >/<";
    else {
		if(order <= max){
			antrian.push(order);
		} else {
			cout<< "Antrian penuh, sampai bertemu di antrian besok >/<";
			getch();
			exit(0);
		}
		order++;
		cout<<"Antrian nomor <" <<antrian.back()<<"> telah masuk";
	}
}

void menu2(){
    if(antrian.empty())    cout<<"Antrian kosong";
	else{
		cout<<"Antrian nomor <"<<antrian.front()<<"> telah selesai, \nsilahkan untuk nomer <" << antrian.front()+1 << "> untuk berkonsultasi dengan customer service kami >/<";
	    antrian.pop();
	}
}

void menu3(){
	if(antrian.empty())		cout<<"Antrian sudah kosong";
	else{
		while(!antrian.empty())		antrian.pop();
		order = 1;
		cout<<"Selamat datang di hari selanjutnya >/<"<<endl;
	}
}

void view(queue <int> update){
    queue <int> antri = update;
    cout<<"<<Update antrian>>" << endl;
    if(antri.empty())	cout << "\nAntrian kosong\n\n";
	else{
		cout << antri.front()<<endl<<endl;
		cout << "No. Antrian Berikutnya\n";
		antri.pop();
		if(antri.empty())   cout<<"[Kosong]";
		else{
		    while(!antri.empty()) {
		        cout << antri.front() << "\t";
		        antri.pop();
		    }
		}
	    cout<<endl<<endl;
	}
}


int main(){
    int menu;

    do{
		system("cls");
        view(antrian);
        cout << "\n\t Selamat Datang di Bank NGAB\n\n";
        cout << "Pilih Menu\n";
        cout << "1. Masukan antrian\n";
        cout << "2. Antrian selanjutnya\n";
		cout << "3. Reset harian\n";
        cout << "4. Exit\n\n";

        cin >> menu;

        switch(menu){
			case 1 :
				menu1();
				Sleep(700);
				break;

			case 2 :
				menu2();
				Sleep(1000);
				break;

			case 3:
				menu3();
				Sleep(700);
				break;

			case 4:
				cout<<"Terimakasih sudah menggunakan layanan kami >.<"<<endl;
				Sleep(1000);
				exit(0);

			default:
				cout<<"pilih yg bnr ege"<<endl;
				getch();
				break;
		}
		system("cls");
        
    }while(menu > 0 || menu < 5);
    return 0;
}
