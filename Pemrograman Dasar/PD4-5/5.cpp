#include <iostream>
#include <math.h>

using namespace std;

int main(){

    // Var Global
    float phi;
    phi = 3.14;
    int pil;
    // Var Kubus
    float rusuk, v_kubus;

    // Var Lingkaran
    float r_lingkaran, d_lingkaran, l_lingkaran;
    
    // Var Silinder
    float r_silinder, d_silinder, t_silinder, v_silinder;

    cout << "Pilih operasi perhitungan" <<endl;

    cout << "1. volume kubus " <<endl;
    cout << "2. luas lingkaran " <<endl;
    cout << "3. volume silinder " <<endl;

    cout <<endl;

    cout << "Masukkan pilihan : " ;
    cin >> pil;

    switch(pil){
        case 1 :    cout << "Masukkan panjang rusuk kubus : ";
                    cin >> rusuk;
                    v_kubus = pow(rusuk,3);
                    cout << "Volume kubus adalah : " << v_kubus <<endl ;
                    break;

        case 2 :    cout << "Masukkan panjang jari jari lingkaran : ";
                    cin >> r_lingkaran;
                    d_lingkaran = r_lingkaran * 2;
                    l_lingkaran =  phi * pow(r_lingkaran, 2);
                    cout << "Luas lingkaran adalah : " << l_lingkaran << " Dengan diameter : " << d_lingkaran << endl;
                    break;

        case 3 :    cout << "Masukkan panjang jari jari silinder : " ;
                    cin >>r_silinder;
                    cout << "Masukkan tinggi silinder : ";
                    cin >> t_silinder;
                    d_silinder = r_silinder * 2;
                    v_silinder = phi * pow(r_silinder , 2) * t_silinder;
                    cout << "Volume silinder adalah : " << v_silinder << " Dengan diameter : " << d_silinder << endl;
                    break;

                    default : 
                    
                        cout << "Nilai yang anda masukkan salah. Program akan berhenti berjalan !" << endl;
    }

     cin.get();
    return 0;
}