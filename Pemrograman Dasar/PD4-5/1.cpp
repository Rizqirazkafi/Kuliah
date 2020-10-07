#include <iostream>

using namespace std;

int main (){

    float bil1, bil2;

    cout << "mencari bilangan terkecil dan terbesar" <<endl;
    cout << "Masukkan bilangan 1 : ";
    cin >> bil1 ;
    cout << "Masukkan bilangan 2 : ";
    cin >> bil2 ;
    if(bil1 < bil2 )
        cout << bil1 << " < " << bil2 <<endl ;
    else if(bil1 > bil2)
        cout << bil1 << " > " << bil2 <<endl ;

}