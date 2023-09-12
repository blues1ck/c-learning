#include <stdio.h>
#include <string.h>
#include <signal.h>
#define	MAX_SIZE_ARG	16
#define MAX_SIZE_CMD 256

char cmd[MAX_SIZE_CMD];
char *argv[MAX_SIZE_ARG];			// an array for command and arguments
char i;

static void parse_cmd(){
    // split string into argv
    char *ptr;
    char i;
    ptr = strtok(cmd, " ");
    while(ptr != NULL){
        //printf("%s\n", ptr);
        argv[i] = ptr;
        i++;
        ptr = strtok(NULL, " ");
    }

    // check for "&"
    if(!strcmp("&", argv[i-1])){
    argv[i-1] = NULL;
    argv[i] = "&";
    }else{
    argv[i] = NULL;
    }
    //printf("%d\n", i);
}