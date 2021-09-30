#include <iostream>
#include <conio.h>
using namespace std;

main(){
	int a;

	//input tahun
	cout<<"=============================================\n\n";
	cout<<"|      PROGRAM Menentukan Tahun KABISAT      | \n\n";
	cout<<"=============================================\n\n";
	awal :
	cout<<" Masukkan Tahun = "; 
	cin>>a;
	
	//tahun kabisat
	if (a%4==0){
		cout<<" Merupakan tahun kabisat"<<endl;
	} else {
		cout<<" Bukan tahun kabisat"<<endl;
	}
	
	
	getch();
}
