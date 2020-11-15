#include "iostream"
using namespace std;

int main() {
  int n;
  int num[n];

  cout << "Masukkan jumlah deret pertama : ";
  cin >> n;
  // membuat deret
  for (int i = 0; i < n; ++i) {
    if (i < 2)
      num[i] = i;

    else
      num[i] = num[i - 2] + num[i - 1];
  }
  // menampilkan deret
  cout << "berikut adalah 10 deret fibonacci pertama: \n";
  for (int i = 0; i < n; ++i) {
    cout << num[i] << " ";
  }
  cout << endl;
}