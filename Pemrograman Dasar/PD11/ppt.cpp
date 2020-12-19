#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main () {
    // PROGRAM INPUT STRING
    // scanf()

    // gets() -- now as getline()

    // fgets()

    // Input string dan balik STRING

    // Input

    string nama;
    cout << "Masukkan nama anda : ";
    getline(cin, nama);

    cout << "Panjang String : " << nama.length() << endl;
    reverse(nama.begin(), nama.end()) ;
    cout << "Reverse String : " << nama << endl;
}