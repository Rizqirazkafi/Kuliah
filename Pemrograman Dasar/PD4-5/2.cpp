#include <iostream>

using namespace std;

int main (){
    int a ;

    cout << "Masukkan angka antara 0 sampai 9" << endl;
    cin >> a;
    switch(a){
        case 0 : cout << "nol" << endl;
                    break ;

        case 1 : cout << "satu" << endl;
                    break ;
                    
        case 2 : cout << "dua" << endl;
                    break ;

        case 3 : cout << "tiga" << endl;
                    break ;

        case 4 : cout << "empat" << endl;
                    break ;

        case 5 : cout << "lima" << endl;
                    break ;

        case 6 : cout << "enam" << endl;
                    break ;

        case 7 : cout << "tujuh" << endl;
                    break ;

        case 8 : cout << "delapan" << endl;
                    break ;

        case 9 : cout << "sembilan" << endl;
                    break ;

            default : cout << "Angka yang anda masukkan lebih dari 9 atau kurang dari 0 atau bukan angka." << endl;
    }

     cin.get();
    return 0;
}