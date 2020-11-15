
#include <iostream>

using namespace std;

int main() {
  int ulang;
  cout << "Masukkan panjang : ";
  cin >> ulang;

  for (int a = 1; a <= ulang; a++) {
    for (int i = 1; i <= ulang; i++) {
      if (a == 1 || a == ulang) {
        cout << "* ";
      } else {
        if (i == 1 || i == ulang) {
          cout << "* ";
        } else {
          cout << "  ";
        }
      }
    }
    cout << endl;
  }
}