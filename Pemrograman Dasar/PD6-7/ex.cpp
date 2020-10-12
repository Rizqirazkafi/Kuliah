#include <iostream>

using namespace std;

int main (){
    int hitungan = 0;
    string halo = "halo";
    int angka, sum = 0, hitung = 0;

    while(hitungan < 10){
        cout << "MAsukkan angka" ;
        cin >> angka ;
        sum += angka;
        hitung++;
    }
     cout << "Jumlah " << sum << endl;
}