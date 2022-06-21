#include <iostream>
#include <queue>
#include <conio.h>
#define max 50

using namespace std;

queue <int> antrian;
int order = 1;

void menu1(){
    if(antrian.size() == max)   cout<< "Antrian penuh";
    else {
		while(order != max){
			antrian.push(order);
			break;
		}
		order++;
		cout<<"Antrian nomor "<<antrian.back()<<" telah masuk";
	}
	
}

void menu2(){
    if(antrian.empty())    cout<<"Antrian kosong";
	else{
		cout<<"Antrian nomor "<<antrian.front()<<" telah keluar";
	    antrian.pop();
	}
}

void view(queue <int> antrian_update){
    queue <int> antri = antrian_update;
    cout<<"<<Update antrian>>"<<endl;
    if(antri.empty())	cout<<"\nAntrian kosong\n\n";
	else{
		cout<<antri.front()<<endl<<endl;
		cout<<"No. Antrian Berikutnya\n";
		antri.pop();
		if(antri.empty())   cout<<"[Kosong]";
		else{
		    while(!antri.empty()) {
		        cout<<antri.front()<<"\t";
		        antri.pop();
		    }
		}
	    cout<<endl<<endl;
	}
}


int main(){
    int menu;

    do{
        view(antrian);
        cout << "\n\t Selamat Datang di Bank NGAB\n\n";
        cout << "Pilih Menu\n";
        cout << "1. Masukan antrian\n";
        cout << "2. Antrian selanjutnya\n";
        cout << "3. Exit\n";

        cin >> menu;

        switch(menu){
			case 1 :
				menu1();
				getch();
				break;

			case 2 :
				menu2();
				getch();
				break;

			case 3:
				cout<<"Terimakasih sudah menggunakan layanan kami >.<"<<endl;
				getch();
				exit(0);

			default:
				cout<<"pilih yg bnr ege"<<endl;
				getch();
				break;
		}
		system("cls");
        
    }while(menu >= 0 || menu <= 4);
    return 0;
}
