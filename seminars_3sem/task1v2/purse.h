#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>

#define	MAX_SIZE_CMD	256
#define	MAX_SIZE_ARG	16

char cmd[MAX_SIZE_CMD];				// string holder for the command
char *argv[MAX_SIZE_ARG];			// an array for command and arguments
char i;												// global for loop counter

void purse(){
	// split string into argv
	char *ptr;
	i = 0;
	ptr = strtok(cmd, " ");
	while(ptr != NULL){
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
}

