#include <iostream>

using namespace std;
int main() {
  int pilih;
  cout << "    SILAHKAN PILIH POLA SEGITIGA" << endl;
  
  cout << "   1. PASCAL" << endl;
  cout << "   2. GENAP" << endl;
  cout << "   3. GASAL" << endl;
  cout << "Silahkan Pilih No berapa : ";
  cin >> pilih;

  if (pilih == 1) {
    int a;
    cout << "Masukkan limit : ";
    cin >> a;
    
    cout << "\n";
    for (int i = 0; i <= a; i++) {
      for (int b = 0; b <= ((2 * a) - (2 * i)); b++) {
        cout << " ";
      }
      int angka;
      for (int c = 0; c <= i; c++) {
        if (c == 0 || i == c)
          angka = 1;
        else
          angka = angka * (i + 1 - c) / c;
        cout << "  ";
        cout << angka;
        cout << " ";
      }
      cout << " "
           << "\n\n\n";
    }
  }
  if (pilih == 2) {
    int a;
    
    cout << "Masukkan limit : ";
    cin >> a;
    
    cout << "\n";

    for (int i = 1; i <= a; i++) {
      for (int s = 0; s <= a - i; s++) {
        cout << " ";
      }
      for (int j = 0; j <= i + (i - 1); j++) {
        cout << "U";
      }
      cout << "\n";
    }
  }
  if (pilih == 3) {

    int a;
    
    cout << "Masukkan limit : ";
    cin >> a;
    
    cout << "\n";
    for (int i = 0; i <= a; i++) {
      for (int k = 0; k <= ((2 * a) - (2 * i)); k++) {
        cout << " ";
      }
      int angka;
      for (int j = 0; j <= i; j++) {
        if (j == 0 || i == j)
          angka = 1;
        else
          angka = angka * (i + 1 - j) / j;
        cout << "  ";
        cout << angka;
        cout << " ";
      }
      cout << " "
           << "\n";
    }
  }
}
