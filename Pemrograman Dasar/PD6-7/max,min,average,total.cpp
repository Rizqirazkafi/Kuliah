#include <iostream>
using namespace std;

int byk; // Banyak angka yang akan diproses
int a, b = 0; // Angka yang akan diproses
int MAX = 0, MIN = 0, TOT = 0; // Variabel untuk angka terbesar, angka terkecil, dan jumlah semua angka
float AVG = 0; // Variabel untuk rata-rata

int main()
{
    cout << "Berapa banyak angka yang ingin Anda isi?\n";
    cin >> byk;
    cout << "Isi bilangan-bilangannya, dipisah dengan tanda spasi: \n";
    for (int i = 0; i < byk; i++)
    {
        cin >> a; // Input nilai a 

        // Membandingkan angka sekarang (a) dan angka iterasi sebelumnya (b) untuk mencari MAX dan MIN  
        
        // 1. Jika iterasi pertama, samakan terlebih dahulu ke bilangan yang pertama diisi
        if (i == 0) 
        {
            b = a;
        }
        // 2. Mencari MAX
        if (b <= a) 
        {
            MAX = a;
        }
        // 3. Mencari MIN
        if (b >= a)
        {
            MIN = a;
        }
        // Menyetor a sebagai ke b agar di iterasi selanjutnya dapat diketahui bilangan sebelumnya
        b = a;

        // Menambahkan a ke TOT, agar dapat diketahui total semua angka (TOT)
        TOT += a;
    }
    AVG = TOT/byk;
    cout << "\nTotal = " << TOT << "\nMaksimum = " << MAX << "\nMinimum = "<< MIN << "\nRata-rata = " << AVG <<endl;
}