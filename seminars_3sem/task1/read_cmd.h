#include <stdio.h>
#include <string.h>

#define	MAX_SIZE_CMD	256

char cmd[MAX_SIZE_CMD];				// string holder for the command

static void read_cmd(){
    // get command from user
    printf("Shell-wrapper >\t");
    fgets(cmd, MAX_SIZE_CMD, stdin);
    // remove trailing newline
    if ((strlen(cmd) > 0) && (cmd[strlen (cmd) - 1] == '\n'))
            cmd[strlen (cmd) - 1] = '\0';
    //printf("%s\n", cmd);
}