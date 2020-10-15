# include <iostream>
using namespace std;

int main ()
{
    int z,jumlah,bil,max=0;
    cout << "Ingin input berapa Bilangan? ";
    cin >> jumlah ;
    for (z=1; z<=jumlah ; z++) {
        cout << "Bilangan ("<<z<<")"<< "= ";
        cin >> bil ;

    if ( bil>max ){
        max = bil ;
    }
    }
    cout << "Bilangan Terbesar = ("<<max<<")" ;

    cout << "\n\n\n" ;
}
