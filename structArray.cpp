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
    //Membuat object struct mahasiswa
    
    mahasiswa mhs[2];

    for(int n = 0;n <2; n++){
        cout << "Masukan NIM = ";
    cin >> mhs[n].nim;
    cin.ignore();
    cout << "Masukan NAMA = ";
    getline (cin , mhs[n].nama);
    cout << "Masukan Alamat Desa = ";
    cin >> mhs[n].alamat.desa;
    cout << "Masukan Alamat KOTA = ";
    cin >> mhs[n].alamat.kota;
    }


    
    cout << endl;
    cout << "Data Mahasiswa " << endl;

    for(int n = 0;n < 2; n++){
        cout << "Data ke-" << n+1 << endl;
        cout << "NIM = " << mhs[n].nim << endl;
        cout << "NAMA = " << mhs[n].nama << endl;
        cout << "Alamat DESA = " << mhs[n].alamat.desa << endl;
        cout << "Alamat KOTA = " << mhs[n].alamat.kota << endl;
    }
 }