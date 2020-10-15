#include<iostream>
using namespace std;
int main(){
    // a untuk input jumlah data yang di inginkan
    int a,z ;
    float total,jumlah,rata,max,min;
    cout<<"Masukkan banyak data : ";
    cin >> a;
    cout<<"\n\n";
    for(z=1; z<=a; z++){
        cout<<"Masukkan Bil ("<<z<<")"<<" = ";
        cin >> total;



        if(z==1){
            max = total;
            min = total;
        }else if(total<min){
            min = total;
        }else if(total>max){
            max = total;
        }
        jumlah=jumlah+total;
        rata=jumlah/a;
    }
        cout<<"\n\n";
    cout<<"Max    : ("<<max<<")"<<endl;
    cout<<"Min    : ("<<min<<")"<<endl;
    cout<<"average: ("<<rata<<")"<<endl;
    cout<<"Total  : ("<<jumlah<<")"<<"\n\n";


}
