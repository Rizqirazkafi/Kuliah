#include <conio.h>
#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>


using namespace std;

int main() {
  unsigned long long des_num; // bilangan yang akan di konversikan
  int pil;

  string bits;

  cout << "1. Desimal ke Binari" << endl;
  cout << "2. Desimal ke Oktal" << endl;
  cout << "3. Binari ke Desimal" << endl;
  cout << "4. Oktal ke Desimal" << endl;
  cout << "=====================" << endl;
  cout << " Pilih opsi konversi : ";
  cin >> pil;

  if (pil == 1) {
    cout << " Masukkan bilangan desimal (Maksimal 65535) : ";
    cin >> des_num;
    // Desimal ke Binari
    while (des_num > 0) {
      bits.append(to_string(des_num % 2));
      des_num /= 2;
    }

    reverse(bits.begin(), bits.end());
    cout << bits << endl;
  } else if (pil == 2) {
    cout << " Masukkan bilangan desimal (Maksimal 65535) : ";
    cin >> des_num;
    int oct_num = 0, awal = 1;

    while (des_num != 0) {
      oct_num += (des_num % 8) * awal;
      des_num /= 8;
      awal *= 10;
    }

    cout << oct_num << endl;
  } else if (pil == 3) {
    cout << " Masukkan bilangan binari (Maksimal 16 bit) : ";
    cin >> bits;
    des_num = 0;
    reverse(bits.begin(), bits.end());
    int size = bits.size();

    for (int i = 0; i < size; i++) {
      if (bits[i] == '1') {
        des_num += pow(2, i);
      }
    }

    cout << "Nilai desimalnya ialah : " << des_num << endl;
  } else if (pil == 4) {
    
    long int oct_num, dec_num = 0;
    int i = 0;
    cout << "Masukkan bilangan oktal (Maksimal 177777) : ";
    cin >>oct_num;

    while(oct_num != 0){
      dec_num = dec_num + (oct_num % 10) * pow(8, i);
      i++;
      oct_num /= 10;
    }
     cout << "Nilai desimalnya adalah : " << dec_num << endl;
     getch();
  }

  // Desimal ke Oktal
}