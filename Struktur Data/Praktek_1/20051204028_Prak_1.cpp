#include <iostream>
#include <conio.h>
using namespace std;

struct data
{
    char nama[100];
    int nilai_partisipasi;
    int nilai_tugas1;
    int nilai_tugas2;
    int nilai_tugas3;
    int nilai_uts;
    int nilai_uas;
    float nilai_final;
};

void hitung(int n,data *mhs);

int main()
{
    cout<<"==========================================\n";
    cout<<"|Program Menghitung Nilai Akhir Mahasiswa|\n";
    cout<<"==========================================\n\n";
    int i,n;
    cout<<"Masukkan Jumlah Mahasiswa                : ";
    cin>>n;
    cout<<endl;

    data mhs[n];

    for(i=0;i<n;++i){
        cout<<"Masukkan Nama Mahasiswa ke-"<<i+1<<"             : ";
        cin.ignore();
        cin.getline(mhs[i].nama,100);
        cout<<"Masukkan Nilai Partisipasi Mahasiswa ke-"<<i+1<<": ";
        cin>>mhs[i].nilai_partisipasi;
        cout<<"Masukkan Nilai Tugas ke-1 Mahasiswa ke-"<<i+1<<" : ";
        cin>>mhs[i].nilai_tugas1;
        cout<<"Masukkan Nilai Tugas ke-2 Mahasiswa ke-"<<i+1<<" : ";
        cin>>mhs[i].nilai_tugas2;
        cout<<"Masukkan Nilai Tugas ke-3 Mahasiswa ke-"<<i+1<<" : ";
        cin>>mhs[i].nilai_tugas3;
        cout<<"Masukkan Nilai UTS Mahasiswa ke-"<<i+1<<"        : ";
        cin>>mhs[i].nilai_uts;
        cout<<"Masukkan Nilai UAS Mahasiswa ke-"<<i+1<<"        : ";
        cin>>mhs[i].nilai_uas;
        cout<<endl<<endl;
    }
    cout<<"=============================================================================================================================\n";
    cout<<"Nama\t\t"<<"Partisipasi\t"<<"Tugas 1\t\t"<<"Tugas 2\t\t"<<"Tugas 3\t\t"<<"UTS\t\t"<<"UAS\t\t"<<"Nilai Akhir\n";
    cout<<"=============================================================================================================================\n";
    cout<<endl;
    hitung(n,mhs);
}

void hitung(int n,data *mhs)
{
    for(int i=0;i<n;++i){
        mhs[i].nilai_final=(mhs[i].nilai_partisipasi*20/100)+((mhs[i].nilai_tugas1+mhs[i].nilai_tugas2+mhs[i].nilai_tugas3)/3*30/100)+(mhs[i].nilai_uts*20/100)+(mhs[i].nilai_uas*30/100);
        cout<<mhs[i].nama<<"\t\t"<<mhs[i].nilai_partisipasi<<"\t\t"<<mhs[i].nilai_tugas1<<"\t\t"<<mhs[i].nilai_tugas2<<"\t\t"<<mhs[i].nilai_tugas3<<"\t\t"<<mhs[i].nilai_uts<<"\t\t"<<mhs[i].nilai_uas<<"\t\t"<<mhs[i].nilai_final;
        cout<<endl<<endl;
    }
}

//bila tampilan program berantakan, bisa diperlebar windownya


