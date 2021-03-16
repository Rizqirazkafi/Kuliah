#include <iostream>

using namespace std;

struct data {
  string nama;
  int no, tugas[3], partisipasi, uts, uas, nilaiAkhir, tot;
  long long nim;

} mhs[100];

int main() {
  char redo = 'y';
  while (redo == 'y' || redo == 'Y') {
    int x, r, i, jt;
    cout << "===== Rekap Nilai =====" << endl;
    cout << "Masukkan jumlah mahasiswa : ";
    cin >> i;
    for (x = 0; x < i; x++) {
      cout << endl;
      cout << "input mahasiswa ke           : ";
      cin >> mhs[x].no;
      cout << "Masukan Nama Mahasiswa       : ";
      cin >> mhs[x].nama;
      cout << "Masukan NIM Mahasiswa        : ";
      cin >> mhs[x].nim;
      //   Input Nilai otomatis (In complete)
      //   cout << "Masukkan jumlah tugas        : ";
      //   cin >> jt;

      //   for (r = 0; r < jt; r++) {
      //     cout << "Masukan Nilai Tugas " << r + 1 << "        : ";
      //     cin >> mhs[x].tugas[r];
      //     if(r == 0){

      //     }else{
      //         mhs[x].tugas[r] = mhs[x].tugas[r] + mhs[x].tugas[r-1];
      //     }
      //   }

      //   input nilai manual
      cout << "Masukan Nilai Tugas 1        : ";
      cin >> mhs[x].tugas[0];
      cout << "Masukan Nilai Tugas 2        : ";
      cin >> mhs[x].tugas[1];
      cout << "Masukan Nilai Tugas 3        : ";
      cin >> mhs[x].tugas[2];

      cout << "Masukan Nilai Partisipasi    : ";
      cin >> mhs[x].partisipasi;
      cout << "Masukan Nilai UTS            : ";
      cin >> mhs[x].uts;
      cout << "Masukan Nilai UAS            : ";
      cin >> mhs[x].uas;
      mhs[x].tot =
          (((mhs[x].tugas[0] + mhs[x].tugas[1] + mhs[x].tugas[2]) / 3) * 0.3) +
          (mhs[x].partisipasi * 0.2) + (0.2 * mhs[x].uts) + (0.3 * mhs[x].uas);
      cout << "Nilai Akhir                  : " << mhs[x].tot;
    }

    for (x = 0; x < i; x++) {
      cout << endl;
      cout << "Mahasiswa ke     : " << mhs[x].no << endl;
      cout << "Nama Mahasiswa   : " << mhs[x].nama << endl;
      cout << "Nim Mahasiswa    : " << mhs[x].nim << endl;
      cout << "Nilai Tugas      : " << mhs[x].tugas << endl;
      cout << "Nilai UTS        : " << mhs[x].uts << endl;
      cout << "Nilai UAS        : " << mhs[x].uas << endl;
      cout << "Nilai Akhir      : " << mhs[x].tot << endl;
      cout << "Nilai Akhir      : " << mhs[x].tot;
    }

    cout << endl;
    cout << "Ulangi ? (y/n) : ";
    cin >> redo;
  }
}