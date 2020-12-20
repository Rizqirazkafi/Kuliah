#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main() {

  int opsi;
  string sub_opsi, repeat;

  while (repeat != "n") {
    cout << endl;
    cout << "Program PPT " << endl;
    cout << "================" << endl;
    cout << "1. Komparasi fungsi input pada string. " << endl;
    cout << "   a. scanf()" << endl;
    cout << "   b. gets() [C11 kebawah] / getline() [C12 keatas]" << endl;
    cout << "   c. fgets()" << endl;
    cout << "2. Input string dan balik string." << endl;
    cout << "3. Menyalin isi array kata1 ke array kata2." << endl;
    cout << "=================" << endl;
    cout << "Masukkan pilihan : ";
    cin >> opsi;

    switch (opsi) {

    case 1: {
      // PROGRAM INPUT STRING

      cout << "Masukkan sub menu : ";
      cin >> sub_opsi;
      if (sub_opsi == "a") {
        // scanf()
        cin.ignore();
        char compare[20];

        cout << "Anda memilih scanf() " << endl;
        cout << "Nilai string saat ini : " << compare << endl;
        cout << "Panjang nilai saat ini : " << sizeof(compare) << endl;
        cout << "Masukkan input : ";
        scanf("%s", compare);
        
        cout << "Nilai string saat ini : " << compare << endl;
        cout << "Panjang nilai saat ini : " << sizeof(compare) << endl;
        return 0;

      } else if (sub_opsi == "b") {
        // getline()
        cin.ignore();
        string compare;
        cout << "Anda memilih getline() " << endl;
        cout << "Nilai string saat ini : " << compare << endl;
        cout << "Panjang string saat ini  : " << compare.length() << endl;
        cout << "Masukkan input : ";
        getline(cin, compare);
        cout << "Nilai string saat ini : " << compare << endl;
        cout << "Panjang string saat ini  : " << compare.length() << endl;
        return 0;

      } else if (sub_opsi == "c") {
        // fgets()
        cin.ignore();
        char compare[20];
        cout << "Anda memilih fgets() " << endl;
        cout << "Nilai string saat ini : " << compare << endl;
        cout << "Panjang string saat ini  : " << sizeof(compare) << endl;
        cout << "Masukkan input : ";
        fgets(compare, 20, stdin);
        cout << "Nilai string saat ini : " << compare << endl;
        cout << "Panjang string saat ini  : " << sizeof(compare) << endl;
        return 0;

      } else {
        cout << "Maaf, input yang anda masukkan salah." << endl;
        cout << "Program akan berakhir !" << endl;
      }

    }

    break;

    case 2: {
      // Input string dan balik STRING
      cin.ignore(); // digunakan untuk mengatasi getline() skipping
      string nama;
      cout << "Masukkan nama anda : ";
      getline(cin, nama);

      cout << "Panjang String : " << nama.length() << endl;
      reverse(nama.begin(), nama.end());
      cout << "Reverse String : " << nama << endl;

    }

    break;

    case 3: {
      // Deklarasi dan Inisialisasi array

      string kata1, kata2;
      cout << "Menampilkan isi array kata1 : ";
      cout << kata1 << endl;
      cout << "Menampilkan isi array kata2 : ";
      cout << kata2 << endl;
      cout << "Masukkan array kata1 : ";
      getline(cin, kata1);
      cout << "Isi array kata1 : " << kata1 << endl;
      cout << "Menyalin data array kata1 menuju array kata2 !" << endl;
      kata2 = kata1;
      cout << "Penyalinan berhasil ! " << endl;
      cout << "Menampilkan array kata1 : " << kata1 << endl;
      cout << "Menampilkan array kata2 : " << kata2 << endl;

    } break;
    }
    cout << endl;
    cout << "Ulangi Program ? (y/n) : ";
    cin >> repeat;
  }
}