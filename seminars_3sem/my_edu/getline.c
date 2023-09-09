#include <stdio.h>

#define MAXLINE 100

int gtline(char s[], int ln);
void cpy(char old[], char new[]);

int main(){
    char line[MAXLINE], longest[MAXLINE] ;
    int len, maxlen = 0;
    
    while ((len = gtline(line, MAXLINE)) > 0){
        if (len > maxlen){
            cpy(line, longest);
            maxlen = len;
        }
    }    
    printf("%d %s", maxlen, longest);
    
}

int gtline(char line[], int lenght){
    int c;
    int len = 0;
    for (len = 0; (((len < lenght - 1) && ((c = getchar()) != EOF) && (c != '\n'))); ++len){
       line[len] = c; 
    }
    if (c == '\n'){
        line[len] = '\n';
        ++len;
    }
    line[len] = '\0';
    return len;  
}
void cpy(char old[], char new[]){
    int i;
    for  (i = 0; old[i] != '\0'; ++i){
        new[i] = old[i];
    }
}
