#include <stdio.h>

int main(){
    int x,y,z;
    x = 0;
    y = 1;
    for(int i= 0; i < 10; i++){
        printf("%d\n", x);
        z = x+y;
        x = y;
        y = z;        

    }

}
