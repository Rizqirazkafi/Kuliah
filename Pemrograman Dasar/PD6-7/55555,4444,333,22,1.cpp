#include <stdio.h>

int main() {
  int a, b, n;

  // n adalah angka mau di mulai dari mana
  printf("Enter n: ");
  scanf("%d", &n);
  // Untuk Max angka dari n dan melakukan penambahan atau pengurangan dari n
  // sedangkan untuk a itu batas pengurangan
  for (a = n; a >= 1; a--) {
    // untuk kesamping
    for (b = 1; b <= a; b++) {
      printf("%d", a);
    }
    // jadi setiap angka sudah menyamping maka angka selanjutnya akan di
    // letakkan di bawahnya
    printf("\n");
  }
  printf("\n\n");

  // Jadi a=1 mulai dari 1 melanjutkan dari yang atas karena berakhir di angka 1
  // a<= artinya a lebih kecil dari n
  for (a = 1; a <= n; a++) {
    // untuk program ke sampingnya
    for (b = 1; b <= a; b++) {
      printf("%d", a);
    }
    printf("\n");
  }
}
