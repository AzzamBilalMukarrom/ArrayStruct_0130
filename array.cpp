#include <iostream>
using namespace std;

//deklarasi array tanpa ukuran, wajib diisi data
int nilai[]={1,2,3};
//deklarasi array dengan ukuran, di isi data awal
int skor[4]={12, 24, 48, 64};
//deklarasi array dengan ukuran, tanpa nilai awal
string nama[3];

   
int main() {


    // menampilkan isi array pada index tertentu
    cout << "Tampilan skor ke 3 = " << skor [2] << endl;


    // mengisi array dengan loop for

    for(int n = 0; n < 3; n++){
        cout << "Mahasiswa ke- " << n+1 << endl;
        cout << "Nama Mahasiswa = " ;
        cin >> nama[n];
    }
    cout << endl;
    // menampilkan isi array di terminal


    for(int n = 0; n < 3; n++){
        cout << "data ke- " << n+1 << endl;
        cout << "data Mahasiswa = " << nama[n] << endl;
        cin >> nama[n];
    }
}
