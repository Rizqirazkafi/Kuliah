#include "iostream"
using namespace std;

int main() {

  int num[10];
  // membuat deret
  for (int i = 0; i < 10; ++i) {
    if (i < 2)
      num[i] = i;

    else
      num[i] = num[i - 2] + num[i - 1];
  }
  // menampilkan deret
  cout << "berikut adalah 10 deret fibonacci pertama: \n";
  for (int i = 0; i < 10; ++i) {
    cout << num[i] << " ";
  }
  cout << endl;
}