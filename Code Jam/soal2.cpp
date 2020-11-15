#include <iostream>

using namespace std;

int main() {
  int ulang;
  cout << "Masukkan panjang : ";
  cin >> ulang;

  for (int a = 1; a <= ulang; a++) {
    for (int i = 1; i <= a; i++) {
      cout << "* ";
    }
    cout << endl;
  }
  for (int a = ulang; a >= 1; a--) {
    for (int i = 1; i <= a; i++) {
      cout << "* ";
    }
    cout << endl;
  }
}