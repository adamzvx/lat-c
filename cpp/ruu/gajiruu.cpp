#include <iostream>
#include <stdio.h>
using namespace std;


int main(int argc, char** argv) {
	string nama,jabat;
	double gaji,pajak,pinjaman,gajib;
	
	cout << "=======================\n"; 
	cout << "GAJI PEGAWAI PT. TELKOM \n";
	cout << "=======================\n"; 
	cout << "Nama Pegawai : "; getline(cin,nama) ; cout <<"\n";
	cout << "Jabatan : "; getline(cin,jabat) ; cout <<"\n";
	cout << "Gaji : "; cin >> gaji ; cout <<"\n";
	cout << "Pinjaman : "; cin >> pinjaman ; cout <<"\n";
	
	pajak = 0.15*gaji;
	gajib = gaji - pinjaman -pajak;
	cout << "Gaji Bersih : "; cout <<gajib;
	
//	cout << nama;
	return 0;
	
}
