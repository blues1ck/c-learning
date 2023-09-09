#include <stdio.h>

int main(){
    for (int fahr = 0; fahr <= 300; fahr += 20){
//        printf("%d\t%d\n", fahr,  (5*(fahr - 32)/9));
        printf("%3d\t%6f\n", fahr,  ((5.0/9.0)*(fahr - 32)));
    }

    return 0;
}
