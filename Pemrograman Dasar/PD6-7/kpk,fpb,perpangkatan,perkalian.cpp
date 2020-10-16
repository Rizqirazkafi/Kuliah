# include <iostream>
using namespace std;

int main ()
{
    int pilihan;
    cout << "======== Perhitungan Matematika ========"<< endl ;
    cout << "1. Mencari KPK" << endl ;
    cout << "2. Mencari FPB " << endl ;
    cout << "3. Perkalian " << endl ;
    cout << "4. Pangkat " << endl ;
    cout << "Silahkan Pilih : ";
    cin >> pilihan;
  

    if (pilihan == 1) {
		int a,b,z,c=0;
		cout<<"\nmasukkan bil1 : ";
		cin>>a;
		cout<<"\nmasukkan bil2 : ";
		cin>>b;
		for (z=1; z<=b; z++){
			c = c+a;
			if(c%b==0){
				cout<<"\n\nHasil Kpk : "<<c<<endl;
				cout<<"\n\n";
				
			}
        }
    }else if (pilihan == 2){

        int a,b,c;
		cout<<"masukkan bil1 : ";
		cin>>a;
		cout<<"masukkan bil2 : ";
		cin>>b;
		
		while(c != 0){
			a=b;
			b=c;
			c=a%b;

            }
		cout<<"\n\nHasil Kpk : "<<b<<endl;
        cout<<"\n\n";
    }else if (pilihan == 3){
        int a,b,c=1,z;
    cout<<"Masukkan banyak data : ";
    cin >> a;
    cout<<"\n\n";
    for(z=1; z<=a; z++){
        cout<<"Masukkan Bil ("<<z<<")"<<" = ";
        cin >> b;
        c = c*b;
    }
    cout<<"Hasil Perkaliannya : "<<c<<endl;
    }else if (pilihan == 4){

		int b=1,bil,pang,a;
		cout<<"masukkan bil yang mau di pangkat : ";
		cin>>bil;
		cout<<"masukkan pangkat : ";
		cin>>pang;
		for (a=1; a<=pang ; a++){
			b = b*bil;

		}
		cout<<"Hasil Perpangkatan : "<<b<<endl;
    }
}
