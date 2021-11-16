#include <iostream>
using namespace std;
int main(){
	float harga_sebuah_pena;
	float harga_sebuah_buku;
	float harga_sebuah_penghapus;
	float harga_sebuah_penggaris;
	float jumlah_pena = 18;
	float jumlah_buku = 8;
	float jumlah_penghapus = 3;
	float jumlah_penggaris = 28;
	
	cin>> harga_sebuah_pena;
	cin>> harga_sebuah_buku;
	cin>> harga_sebuah_penghapus;
	cin>> harga_sebuah_penggaris;
	
	harga_sebuah_pena *= jumlah_pena;
	harga_sebuah_buku *= jumlah_buku;
	harga_sebuah_penghapus *= jumlah_penghapus;
	harga_sebuah_penggaris *= jumlah_penggaris;
	
	cout<< endl;
	cout<< "harga " << jumlah_pena << " buah pena = Rp." << harga_sebuah_pena << endl;
	cout<< "harga " << jumlah_buku << " buah buku = Rp." << harga_sebuah_buku << endl;
	cout<< "harga " << jumlah_penghapus << " buah penghapus = Rp." << harga_sebuah_penghapus << endl;
	cout<< "harga " << jumlah_penggaris << " buah penggaris = Rp." << harga_sebuah_penggaris << endl;
	
	return 0;
}
