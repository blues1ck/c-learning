#include <stdio.h>
#include <unistd.h>
#include <string.h>
#define MAXLINE 100


int main(){
    while(1){
        char *p;
        char delim[] = " ,-\n";
        char s[MAXLINE];
        scanf("%s", s);
        int id = fork();
        if (id == 0){
        
            for (char *p = strtok(s,delim); p != NULL; p = strtok(NULL, delim))
            {
                execl(p, "", NULL);
            }
            return 0;
        }
    }
}
