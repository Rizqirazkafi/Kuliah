#include "stdio.h"

int main() {


  {
    int  n, f_n, f_n1, f_n2;
    printf("Masukkan batas maksimum : ");
    scanf("%d", &n);
    f_n1 = 1;
    f_n2 = 0;
    f_n = f_n2 + f_n1;
    printf("%d ", f_n);
        
      for (int i = 1; i <= n; i++) {
        f_n = f_n1 + f_n2;
        f_n2 = f_n1;
        f_n1 = f_n;
        if(f_n >= n){
            printf("\n");
            break;
        }
        printf("%d ", f_n);
        
      }
    
  }
}