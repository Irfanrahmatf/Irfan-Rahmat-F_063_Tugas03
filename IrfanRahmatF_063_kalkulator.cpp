#include <iostream>
#include <conio.h>
#include <math.h>
#include <string>
using namespace std;

int main(){
	int a, b, pil;
	float hasil;
	string operasi;
	char opr, yn;
	
	awal :
	cout<<"======================================\n\n";
	cout<<"|          OPERASI ARITMATIKA        |\n\n";
	cout<<"======================================\n\n";
	
	cout<<"1. penjumlahan"<<endl;
	cout<<"2. pengurangan"<<endl;
	cout<<"3. perkalian"<<endl;
	cout<<"4. pembagian"<<endl;
	cout<<"5. modulus"<<endl<<endl;
	
	cout<<" Pilih Operasi = "; cin>>pil;
	cout<<" masukkan bilangan pertama "; cin>>a;
	cout<<" masukkan bilangan kedua "; cin>>b;
	
	switch(pil){
		case 1 : hasil=a+b;
			opr='+';
			break;
			
		case 2 : hasil=a-b;
			opr='-';
			break;
			
		case 3 : hasil=a*b;
			opr='*';
			break;
			
		case 4 : hasil=a/b;
			opr='/';
			break;
			
		case 5 : hasil=a%b;
			opr='%';
			break;
			
		default :
			cout<<"Terdapat Operasi Yang Salah"<<endl;
	}
	
	cout<<"========================================\n\n";
	cout<<""<<a<<opr<<b<<" = "<<hasil<<endl;
	
	
	
	
	getch();
}
