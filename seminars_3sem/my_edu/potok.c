#include <stdio.h>
#include <string.h>

int main(){
//    int c;
    long nc = 0;
    for (nc = 0; getchar() != EOF; ++nc){};
//    while ((c = getchar()) != EOF){
//        putchar(c);
//        ++nc;
//    }
//    putchar(c);
    printf("%ld\n" ,nc);
}
