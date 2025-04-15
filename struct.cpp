#include <iostream>
using namespace std;

 struct mahasiswa{
    string nim;
    string nama;
    string alamat;

 };

 int main (){


    //Membuat object struct mahasiswa
    mahasiswa mhs;

    //mengakses struct mahasiswa


    mhs.nim = "2022014000";
    mhs.nama = "Abra";
    mhs.alamat = "Kasihan";



    cout << "Masukan NIM = ";
    cin >> mhs.nim;
    cout << "Masukan NAMA = ";
    cin >> mhs.nama;
    cout << "Masukan Alamat";
    cin >> mhs.alamat;



    cout << "NIM = " << mhs.nim << endl;
    cout << "NIM = " << mhs.nama << endl;
    cout << "NIM = " << mhs.alamat << endl;
 }