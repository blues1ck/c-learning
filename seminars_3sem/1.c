#include <stdio.h>
#include <unistd.h>


int main(){
    pid_t pid;
    pid = fork();
    if (pid == 0){
        while (1){
            printf("Parent: my PID is %d, the pid is: %d/n", getpid(), pid);
            sleep(1);
        }
            // child
    } else {
        while (1){
            printf("Parent: my PID is %d, the pid is: %d/n", getpid(), pid);
        //parent
        }
    }
    return 0;
}
