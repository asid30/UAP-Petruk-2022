#include <iostream>
#include <queue>
#include <windows.h>
using namespace std;
int temp=5;
int waktu=200;
void title();

void view(){
    queue <int> antrian;
    int x=0,i,selection=0;
    int menu;

	if(selection==0){
		cout<<"List antrian sekarang : \n";
    	for(int i = 1; i <= temp; i++){
        	antrian.push(i);
		}
        
    	while (!antrian.empty()) {
        	cout<< antrian.front()<<"\t";
        	antrian.pop();
        	Sleep(waktu);
    	}
	}
	else if(selection==1){
		cout<<"List antrian sekarang : \n";
    	for(int i = 1; i <= temp; i++){
        	antrian.push(i);
		}
        
    	while (!antrian.empty()) {
        	cout<< antrian.front()<<"\t";
        	antrian.pop();
        	Sleep(waktu);
    	}
	}
    
    title ();
    cin >> menu;

    if(menu == 1) {
    	system("CLS");
    	temp++;
    	selection=0;
    	view();
	}
    else if(menu == 2){
		system("CLS");
    	temp--;
    	selection=1;
    	view();
	}  
    else if(menu == 3){
    	exit(0);
	}
    else {
    	cout << "pilih yg bnr ege";	
	}
}

void title (){
	cout << endl<<endl;
    cout << "\t Selamat Datang di Bank NGAB\n\n";
    cout << "Pilih Menu\n";
    cout << "1. Tambah antrian\n";
    cout << "2. Hapus antrian\n";
    cout << "3. Exit\n";
	cout << endl;
}

int main(){
    view();
	cout<<endl;
    return 0;
}
