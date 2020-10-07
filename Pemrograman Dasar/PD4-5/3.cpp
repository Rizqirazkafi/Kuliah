#include <iostream>


using namespace std;

int main (){

    // Set Variable
    float tugas, partisipasi, uts, uas, rata2;
    string mulai;

    // Input
    cout << "Masukkan nilai tugas : ";
    cin >> tugas;
    cout << "Masukkan nilai partisipasi : " ;
    cin >> partisipasi ;
    cout << "Masukkan nilai UTS : ";
    cin >> uts;
    cout << "Masukkan nilai UAS : ";
    cin >> uas;

    // Calculation
    rata2 = (tugas + partisipasi + uts + uas) / 4;

    cout << "Hitung rata rata dan tampilkan Grade ? (y/n) : " ;
    cin >> mulai;

    if(mulai == "y"){
        cout << "Rata rata nilai anda : " << rata2 <<endl;
        if (rata2 >= 90)
        cout << "Grade anda A" <<endl;
        else if(rata2 >=80 )
        cout << "Grade anda B" <<endl;
        else if(rata2 >= 70)
        cout << "Grade anda C" <<endl;
        else if(rata2 >= 60)
        cout << "Grade anda D" <<endl;
        else 
            cout <<"Grade anda F , Sinau o sw !" <<endl;}
    else if(mulai == "n"){
        cout << "Program batal" <<endl;
    }


   

    
}