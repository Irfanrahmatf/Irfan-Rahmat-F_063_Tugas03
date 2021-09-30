#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {
	string nama, nik;
	enum jenis_kelamin {laki_laki, perempuan};
	int jenis_kelamin, number, status_pernikahan, kendaraan;
	long gaji_pokok, uang_makan, tunjangan, transport, gaji_kotor, pajak, gaji_bersih;

    cout<< " ==============================================\n\n";
	cout<< " |      Program Menghitung Gaji Karyawan      |\n\n";
	cout<< " ==============================================\n\n";
	cout<<"Nama : ";
	getline(cin, nama);
	
	cout<<"NIK  : ";
	getline(cin, nik);

	
	cout<<"Masukkan Jenis Kelamin (Jika perempuan=0, laki-laki=1) :";
	cin>>number;
	
	cout<<"Masukkan Status Pernikahan (Single = 0 dan Menikah = 1) : ";
	cin>>status_pernikahan;
	
	
	cout<<"Masukkan Kendaraan (Motor = 0 dan Mobil = 1) : ";
	cin>>kendaraan;
	
	
	cout<<"Masukkan Gaji Pokok : ";
	cin>>gaji_pokok;
	cout<<"Masukkan Uang Makan : ";
	cin>>uang_makan;
	cout<<endl;

	// Untuk Menghitung Tunjangan
	if(jenis_kelamin==1 && status_pernikahan==1) {
		tunjangan = 500;
	}
	else {
		tunjangan = 0;
	}

	// Untuk Menghitung Transport
	if(kendaraan==1) {
		transport = 1000;
	}
	else if(kendaraan==0) {
		transport = 500;
	}
	else {
		transport = 0;
	}

	// Untuk menghitung Gaji Kotor
	gaji_kotor = gaji_pokok+tunjangan+uang_makan+transport;

	// Untuk Menghitung Pajak
	pajak = (0.05*gaji_kotor);

	// Untuk Menghitung Gaji Bersih
	gaji_bersih = gaji_kotor-pajak;

    cout<<"=======================================================\n";
	cout<<"Tunjangan      :"<<tunjangan<<endl;
	cout<<"Uang Transport :"<<transport<<endl;
	cout<<"Gaji Kotor     :"<<gaji_kotor<<endl;
	cout<<"Pajak          :"<<pajak<<endl;
	cout<<"Gaji Bersih    :"<<gaji_bersih<<endl;

	getch();
	return 0;
}
