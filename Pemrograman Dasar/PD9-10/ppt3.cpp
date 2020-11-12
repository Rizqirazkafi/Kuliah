#include "iostream"
using namespace std;

int main() {
  int n;
  // memasukkan bilangan yang menjadi batas deret
  cout << "masukkan batas deret: ";
  cin >> n;
  int num[n];
  // membuat deret fibonacci
  for (int i = 0; i < n; ++i) {
    if (i < 2)
      num[i] = i;

    else
      num[i] = num[i - 2] + num[i - 1];
  }
  // menampilkan deret fibonacci
  for (int i = 1; i <= n; ++i) {
    if ((num[i] <= n) && (num[i] > 0))
      cout << num[i] << " ";
  }
  cout << endl;
}