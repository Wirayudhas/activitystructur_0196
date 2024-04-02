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
    Mahasiswa mhs[3];


    for (int i = 0; i < 3; i++) {
        cout << "Data ke-" << (i + 1) << ":" << endl;
        cout << "Nomor mahasiswa : ";
        getline(cin, mhs[i].nim);
        cout << "Nama Mahasiswa : ";
        getline(cin, mhs[i].nama);

        cout << "alamat mahasiswa : " << endl;
        cout << "\t Desa : ";
        getline(cin, mhs[i].alamat.desa);
        cout << "\t Kota : ";
        getline(cin, mhs[i].alamat.kota);

        cout << "Umur mahasiswa : ";
        cin >> mhs[i].umur;
        cin.ignore(1, '\n');
        cout << endl;
    }


    for (int i = 0; i < 3; i++) {
        cout << endl;
        cout << "Data mahasiswa ke-" << (i + 1) << ":" << endl;
        cout << "\n NIM :" << mhs[i].nim;
        cout << "\n Nama : " << mhs[i].nama;
        cout << "\n Alamat : ";
        cout << "\n \t Desa : " << mhs[i].alamat.desa;
        cout << "\n \t Kota : " << mhs[i].alamat.kota;
        cout << "\n Umur : " << mhs[i].umur;
        cout << endl;
    }

    