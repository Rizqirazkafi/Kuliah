#include "iostream"
using namespace std;

int main() {

  int mtx[3][3];
  // memasukkan unsur matriks
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      cout << "masukkan bilangan matriks (" << i + 1 << "," << j + 1 << "): ";
      cin >> mtx[i][j];
    }
  }
  // menampilkan matriks
  cout << endl;
  cout << "berikut matriks yang dihasilkan: " << endl << endl;
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      cout << "  " << mtx[i][j] << "  ";
    }
    cout << endl << endl;
  }
  // mengubah/menukar nilai baris dengan nilai kolom dan menampilkan hasil
  cout << "berikut adalah hasil transposenya: " << endl << endl;
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      cout << "  " << mtx[j][i] << "  ";
    }
    cout << endl << endl;
  }

  cout << "berikut adalah hasil penjumlahan matriks asli dan transposenya: "
       << endl
       << endl;
  // menampilkan hasil penjumlahan matriks asli dan transposenya
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      cout << "  " << mtx[i][j] + mtx[j][i] << "  ";
    }
    cout << endl << endl;
  }
}