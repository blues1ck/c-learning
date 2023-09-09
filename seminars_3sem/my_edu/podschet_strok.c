#include <stdio.h>

int main(){
    int c, ns, nt, nspace;
    ns = 0;
    nt = 0;
    const char space = ' ';
    while((c = getchar())!=EOF){
        if (c == '\n'){
            ++ns;
        } else if(c == '\t'){
            ++nt;
        } else if(isblanc(c)){
            ++nspace;
        }
    }
    printf("%d\n %d\n %d\n", ns, nt, nspace);
}
