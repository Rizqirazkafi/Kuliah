#include<iostream>

using namespace std;
int main ()
{
    char ulang = 'Y';
    while (ulang == 'Y' || ulang == 'y')
{

    struct data
    {
        char nama[20];
        long long int nim;
        int tugas;
        int uts;
        int uas;
        int partisipasi;
        int cal;
        int no;
    };
    struct data mahasiswa[100];
    int x,i,cal;
    cout << "====================================\n";
    cout << "===========ALFITO MULYONO===========\n";
    cout << "====================================\n";
    cout<<"Masukan Jumlah Mahasiswa : ";
    cin>>i;
    for(x=0;x<i;x++)
{
    cout<<"\ninput MAHASISWA KE? : " ;
    cin>>mahasiswa[x].no;
    cout<<"Masukan Nama Mahasiswa      : ";
    cin>>mahasiswa[x].nama;
    cout<<"Masukan NIM Mahasiswa       : ";
    cin>>mahasiswa[x].nim;
    cout<<"Masukan Nilai Tugas         : ";
    cin>>mahasiswa[x].tugas;
    cout<<"Masukan Nilai Partisipasi   : ";
    cin>>mahasiswa[x].partisipasi;
    cout<<"Masukan Nilai UTS           : ";
    cin>>mahasiswa[x].uts;
    cout<<"Masukan Nilai UAS           : ";
    cin>>mahasiswa[x].uas;
        cal=(mahasiswa[x].tugas*0.3)+( mahasiswa[x].partisipasi*0.2) +( mahasiswa[x].uts*0.2) +(mahasiswa[x].uas*0.3);
    cout<<"Nilai Akhir                 : "<<cal << "\n\n";
}

for(x=0;x<i;x++)
{
    cout<<"\nMahasiswa ke     : "<<mahasiswa[x].no << "\n";
    cout<<"Nama Mahasiswa   : "<<mahasiswa[x].nama << "\n";
    cout<<"Nim Mahasiswa    : "<<mahasiswa[x].nim << "\n";
    cout<<"Nilai Tugas      : "<<mahasiswa[x].tugas << "\n";
    cout<<"Nilai UTS        : "<<mahasiswa[x].uts << "\n";
    cout<<"Nilai UAS        : "<<mahasiswa[x].uas << "\n\n";
}
    cout << "Gunakan Lagi Program? Y/N\n";
    cin >> ulang;
}
}
