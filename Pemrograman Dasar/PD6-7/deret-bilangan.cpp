#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string final;
    int cacah , genap , gasal , fibonanci , opsi;

    while (final != "n")
    {
        cout << "Pilih tampilan bilangan" << endl;

        cout << "1. Bilangan cacah " << endl;
        cout << "2. Bilangan genap " << endl;
        cout << "3. Bilangan gasal " << endl;
        cout << "4. Bilangan fibonanci " << endl;

        cout << endl;

        cout << "Masukkan pilihan : ";
        cin >> opsi;

        if (opsi == 1){
            for (cacah = 0 ; cacah <= 20; ){
                
                cout << cacah << "\n";
                cacah ++;
            }
            cout << "Tampilkan bilangan lainnya ? (y/n) : ";
            cin >> final;
            
        }else if (opsi == 2){
            for (genap = 0 ; genap <= 20 ; genap++){
                // genap = genap + 2;
                cout << genap << "\n";
                genap ++;
            }
            cout << "Tampilkan bilangan lainnya ? (y/n) : ";
            cin >> final;
        }else if (opsi == 3){
            for (gasal = 0 ; gasal <= 20 ; gasal++){
                gasal = gasal + 1;
                cout << gasal << "\n";
                
            }
            cout << "Tampilkan bilangan lainnya ? (y/n) : ";
            cin >> final;
        }
    }
}