#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string nama;
  cout << "Masukkan nama anda : ";
  getline(cin, nama);

  reverse(nama.begin(), nama.end());
  cout << "Reverse String : " << nama << endl;
  cout << "Panjang String : " << nama.length() << endl;
}