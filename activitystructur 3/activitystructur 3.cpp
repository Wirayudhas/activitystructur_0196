#include <iostream>
#include <string>
using namespace std;


struct DetailAlamat {
	string desa; 
	string kota;  
};

struct Mahasiswa {
	string nim;   
	string nama; 
	DetailAlamat alamat;  
	int umur;    
};

int main() {
	Mahasiswa mhs;

	cout << "Masukkan NIM: ";
	getline(cin, mhs.nim);

	cout << "Masukkan Nama: ";
	getline(cin, mhs.nama);

	cout << "Masukkan Alamat Desa: ";
	getline(cin, mhs.alamat.desa);

	cout << "Masukkan Alamat Kota: ";
	getline(cin, mhs.alamat.kota);

	cout << "Masukkan Umur: ";
	cin >> mhs.umur;

	cout << endl;
	cout << "\n NIM: " << mhs.nim;
	cout << "\n Nama: " << mhs.nama;
	cout << "\n Nama Desa" << mhs.alamat.desa;
	cout << "\n Nama Kota: " << mhs.alamat.kota;
	cout << "\n Umur: " << mhs.umur;

	return 0;
}