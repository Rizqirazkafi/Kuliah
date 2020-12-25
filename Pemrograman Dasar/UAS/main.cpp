#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
  // Inisialisasi atau deklarasi variabel

  string username, password;
  int loginAttempt = 0;

  while (loginAttempt < 5) {
    cout << "Harap masukkan user name : ";
    cin >> username;

    cout << "Harap masukkan password :  ";
    cin >> password;

    if (username == "rizqi" && password == "123") {
      cout << "Selamat datang, Rizqi ! \n" << endl;

      string prompt;

      while (prompt != "n") {
        long long jum_beli, bayar, diskon, jumlah[50], harga[50], sub_tot[50];

        string nama_barang[50];
        long long tot;

        cout << "PROGRAM C++ KASIR" << endl;
        cout << "---------------------------" << endl;
        cout << endl;
        cout << "Masukan Jumlah Beli : ";
        cin >> jum_beli; // Pengguna memasukan jumlah beli

        for (int i = 0; i < jum_beli; i++) {
          cout << endl;
          cout << "Masukan Barang Ke-" << i + 1 << endl;
          cout << endl;
          cin.ignore();
          cout << "Nama Barang : ";
          // cin >> nama_barang[i]; // Pengguna input nama barang disimpan pada
          // array
          getline(cin, nama_barang[i]);
          // nama_barang

          cout << "Jumlah      : ";
          cin >> jumlah[i]; // Pengguna input jumlah disimpan pada array jumlah

          cout << "Harga       : ";
          cin >> harga[i]; // Pengguna input harga disimpan pada array harga

          sub_tot[i] =
              jumlah[i] * harga[i]; // Menjumlahkan Harga sub total barang
          tot += sub_tot[i];        // Menjumlahkan seluruh sub total barang
        }

        cout << endl;
        cout << "STRUK BELANJA " << endl;
        cout << "---------------------------------------------------------"
             << endl;
        cout << "No        Barang    Jumlah       Harga     Sub Total" << endl;
        for (int i = 0; i < jum_beli; i++) {
          cout << i + 1 << setw(15) << nama_barang[i] << setw(10) << jumlah[i]
               << setw(12) << harga[i] << setw(14) << sub_tot[i]
               << endl; // Menampilkan semua nilai array
        }
        cout << "---------------------------------------------------------"
             << endl;

        // Kondisi untuk menentukan diskon yang didapatkan berdasarkan total
        // belanja
        if (tot >= 100000) {
          diskon = 0.06 * tot;
        } else if (tot >= 50000) {
          diskon = 0.04;
        } else if (tot >= 25000) {
          diskon = 0.02;
        } else {
          diskon = 0;
        }

        // Menampilkan Keterangan
        cout << "Jumlah Bayar : Rp." << tot
             << endl; // Menampilkan jumlah bayar (belum termasuk diskon)
        cout << "Dikon        : Rp." << diskon << endl; // Menampilkan diskon
        cout << "Total Bayar  : Rp." << tot - diskon
             << endl; // Menampilkan total harga yang harus dibayar
        cout << "Bayar        : Rp.";
        cin >> bayar; // Input dari user untuk jumlah yang dibayar
        cout << "Kembali      : Rp." << (bayar - (tot - diskon))
             << endl; // Menampilkan uang kembali

        cout << "Lakukan lagi ? (y/n) : ";
        cin >> prompt;
      }
      break;
    } else {
      cout << "User Name atau Password salah. Silahkan coba lagi \n" << endl;
      loginAttempt++;
    }
  }

  if (loginAttempt == 5) {
    cout << "Terlalu banyak percobaan login ! Program akan di tutup. \n"
         << endl;
  }

  cout << "Terima kasih \n" << endl;

  cin.get();
  return 0;
}