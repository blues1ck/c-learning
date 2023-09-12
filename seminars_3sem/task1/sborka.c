#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/types.h>

#include "read_cmd.h"
#include "parse.h"

#define	MAX_SIZE_CMD	256
#define	MAX_SIZE_ARG	16

static void read_cmd();								// get command string from the user
static void parse_cmd();						// convert the command string to the required format by execvp()
static void run_cmd();								// to start the shell

char cmd[MAX_SIZE_CMD];				// string holder for the command
char *argv[MAX_SIZE_ARG];			// an array for command and arguments
pid_t pid;                          // global variable for the child process ID
char i;	

int main(){
    // start the shell-wrapper
    run_cmd();

    return 0;
}

static void run_cmd(){
    while(1){
        // get the command from cmd
        read_cmd();

        // bypass empty commands
        if(!strcmp("", cmd)) continue;

        // check for "exit" command
        if(!strcmp("exit", cmd)) break;

        // fit the command into *argv[]
        parse_cmd();

        // fork and execute the command
        pid = fork();
        if(-1 == pid){
            printf("failed to create a child\n");
        }
        else if(0 == pid){
            // execute a command
            execvp(argv[0], argv);
        }
        else{
            // wait for the command to finish if "&" is not present
            if(NULL == argv[i]) waitpid(pid, NULL, 0);
        }
    }
}

