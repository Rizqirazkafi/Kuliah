#include "iostream"
using namespace std;

int main() {

  int mtx[3][3], mtxt[3][3];
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
  mtxt[0][0] = mtx[0][0];
  mtxt[1][0] = mtx[0][1];
  mtxt[2][0] = mtx[0][2];
  mtxt[0][1] = mtx[1][0];
  mtxt[1][1] = mtx[1][1];
  mtxt[2][1] = mtx[1][2];
  mtxt[0][2] = mtx[2][0];
  mtxt[1][2] = mtx[2][1];
  mtxt[2][2] = mtx[2][2];
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      cout << "  " << mtxt[i][j] << "  ";
    }
    cout << endl << endl;
  }
  cout << "berikut adalah hasil penjumlahan matriks asli dan transposenya: "
       << endl
       << endl;
  // menampilkan hasil penjumlahan matriks asli dan transposenya
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      cout << "  " << mtx[i][j] + mtxt[i][j] << "  ";
    }
    cout << endl << endl;
  }
}