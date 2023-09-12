/*#include <stdio.h>
#include <string.h>

#define	MAX_SIZE_CMD	256

char cmd[MAX_SIZE_CMD];				// string holder for the command
*/
#include <stdio.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/types.h>

#define	MAX_SIZE_CMD	256
#define	MAX_SIZE_ARG	16

static void read_cmd();								// get command string from the user
static void parse_cmd();						// convert the command string to the required format by execvp()
static void run_cmd();								// to start the shell

char cmd[MAX_SIZE_CMD];				// string holder for the command
char *argv[MAX_SIZE_ARG];			// an array for command and arguments
pid_t pid;                          // global variable for the child process ID
char i;	

static void read_cmd(){
    // get command from user
    printf("Shell-wrapper >\t");
    fgets(cmd, MAX_SIZE_CMD, stdin);
    // remove trailing newline
    if ((strlen(cmd) > 0) && (cmd[strlen (cmd) - 1] == '\n'))
            cmd[strlen (cmd) - 1] = '\0';
    //printf("%s\n", cmd);
    
}