#include <iostream>
#include <string>
using namespace std;

 struct detailAlamat{
    string desa;
    string kota;


 };

struct mahasiswa{
    string nim;
    string nama;
    detailAlamat alamat;

 };

 int main (){
    //Membuat object struct mahasiswa umy
    mahasiswa mhs;

    //mengakses struct mahasiswa


    cout << "Masukan NIM = ";
    cin >> mhs.nim;
    cin.ignore();
    cout << "Masukan NAMA = ";
    getline (cin , mhs.nama);
    cout << "Masukan Alamat Desa = ";
    cin >> mhs.alamat.desa;
    cout << "Masukan Alamat KOTA = ";
    cin >> mhs.alamat.kota;
    
    cout << endl;
    cout << "Data Mahasiswa " << endl;

    cout << "NIM = " << mhs.nim << endl;
    cout << "NAMA = " << mhs.nama << endl;
    cout << "Alamat DESA = " << mhs.alamat.desa << endl;
    cout << "Alamat KOTA = " << mhs.alamat.kota << endl;
 }