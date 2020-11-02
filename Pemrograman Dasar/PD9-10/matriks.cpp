#include <iostream>
using namespace std;
int main() {
  // ni = jumlah baris matriks pertama
  // nj = jumlah kolom matriks pertama
  // i & j index baris dan kolom pertama
  // nx & ny = jumlah baris dan kolom matriks kedua
  int ni, nj, i, j, nx, ny;

  cout << "Masukkan jumlaah baris untuk matriks pertama : ";
  cin >> ni;
  cout << "Masukkan jumlah kolom untuk matriks pertama : ";
  cin >> nj;
  cout << "Masukkan jumlah baris untuk matriks kedua : ";
  cin >> nx;
  cout << "Masukkan jumlah kolom untuk matriks kedua : ";
  cin >> ny;
  if ((ni != nx) || (nj != ny)) {
    cout << "Maaf , kedua matriks tidak dapat di jumlah." << endl;
  } else {
    int m1[ni][nj], m2[nx][ny];
    for (i = 0; i < ni; i++) {
      for (j = 0; j < nj; j++) {
        cout << "Masukkan  nilai elemen matriks pertama pada baris ke-" << i + 1
             << " dan kolom ke-" << j + 1 << " : ";
        cin >> m1[i][j];
        cout << "Masukkan nilai elemen matriks kedua pada baris ke-" << i + 1
             << " dan kolom ke-" << j + 1 << " : ";
        cin >> m2[i][j];
      }
    }
  }
}