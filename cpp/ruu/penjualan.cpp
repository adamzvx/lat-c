#include <iostream>
#include <stdio.h>
using namespace std;


int main() {
	string namaBrg;
	float harga,jlhJual,totalHarga, disc, totalBayar ;
	
	cout << "=======================\n"; 
	cout << "PENJUALAN TV SONY \n";
	cout << "=======================\n"; 
	cout << "Nama Barang : "; getline(cin,namaBrg) ; cout <<"\n";
	cout << "Harga       : "; cin >> harga ; cout <<"\n";
	cout << "Jumlah Jual : "; cin >> jlhJual ; cout <<"\n";
	//total harga
	totalHarga = harga * jlhJual;
	//hitung diskon
	if (totalHarga > 2500000){
		disc = 0.10 * totalHarga;
	}else{
		disc =0;
	}
	int tot = (int)totalHarga;
	cout << "Total Harga : "; cout << tot ; cout <<"\n";
	cout << "Discount    : "; cout << disc ; cout <<"\n";
	
	// total all
	totalBayar = totalHarga-disc;	
	int total = (int)totalBayar;
	cout << "====================================\n";
	cout << "Total Pembayaran : "; cout <<total;
	
	return 0;
	
}
