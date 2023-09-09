#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
    pid_t pid = fork();

    if (pid < 0){
        printf("Err\n");
    } else if (pid){
        int status;
        printf("Process %d waiting for %d\n ", getpid(), pid);
        waitpid(pid, &status, 0);
        printf("Ret code of %d :  %d\n", pid, WEXITSTATUS(status));

    } else {
        printf("Parent pid: %d\n", getpid());
        execl("/usr/bin/ls", "ls", "-l", NULL);
//        sleep(2);
        
//        exit(42);
    }
}
