#include <conio.h>
#include <iostream>
using namespace std;

struct data {
  char nama[100];
  int par, t1, t2, t3, uts, uas, final;
};

void count(int n, data *mhs);

int main() {
  cout << "========================\n";
  cout << "|Nilai Akhir Mahasiswa|\n";
  cout << "========================\n";
  int i, n;
  cout << "Masukkan jumlah mahasiswa : ";
  cin >> n;
  cout << endl;
  data mhs[n];
  for (i = 0; i < n; i++) {
    cout << "Masukkan nama mahasiswa ke-" << i + 1 << "   : ";
    cin.ignore();
    cin.getline(mhs[i].nama, 100);
    cout << "Nilai partisipasi M-" << i + 1 << " : ";
    cin >> mhs[i].par;
    cout << "Nilai tugas 1 M-" << i + 1 << " : ";
    cin >> mhs[i].t1;
    cout << "Nilai tugas 2 M-" << i + 1 << " : ";
    cin >> mhs[i].t2;
    cout << "Nilai tugas 3 M-" << i + 1 << " : ";
    cin >> mhs[i].t3;
    cout << "Nilai UTS M-" << i + 1 << " : ";
    cin >> mhs[i].uts;
    cout << "Nilai UAS M-" << i + 1 << " : ";
    cin >> mhs[i].uas;
    cout << endl << endl;
  }
  cout << "===================================================================="
          "=========================================================\n";
  cout << "Nama\t\t"
       << "Partisipasi\t"
       << "Tugas 1\t\t"
       << "Tugas 2\t\t"
       << "Tugas 3\t\t"
       << "UTS\t\t"
       << "UAS\t\t"
       << "Nilai Akhir\n";
  cout << "===================================================================="
          "=========================================================\n";
  cout << endl;
  count(n, mhs);
}

void count(int n, data *mhs) {
  for (int i = 0; i < n; i++) {
    mhs[i].final =
        (mhs[i].par * 20 / 100) +
        ((mhs[i].t1 + mhs[i].t2 + mhs[i].t3) / 3 *
         30 / 100) +
        (mhs[i].uts * 20 / 100) + (mhs[i].uas * 30 / 100);
    cout << mhs[i].nama << "\t\t" << mhs[i].par << "\t\t"
         << mhs[i].t1 << "\t\t" << mhs[i].t2 << "\t\t"
         << mhs[i].t3 << "\t\t" << mhs[i].uts << "\t\t"
         << mhs[i].uas << "\t\t" << mhs[i].final;
    cout << endl << endl;
  }
}