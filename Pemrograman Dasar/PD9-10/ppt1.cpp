#include "cstdlib"
#include "iostream"
using namespace std;

int main() {

  int n;
  // memasukkan banyak data yang ingin ditampilkan
  cout << "masukkan jumlah mahasiswa: ";
  cin >> n;
  int nilai[n];
  char nama[n][100];
  // memasukkan data
  for (int i = 1; i <= n; ++i) {
    cout << "masukkan nama mahasiswa ke " << i << ": ";
    cin >> nama[i];
    cout << "masukkan nilai mahasiswa: ";
    cin >> nilai[i];
  }
  /* system("cls"); */
  // menampilkan data
  for (int i = 1; i <= n; ++i) {
    if (nilai[i] > 50)
      cout << nama[i] << " dengan nilai: " << nilai[i] << " dinyatakan LULUS"
           << endl;
  }
}