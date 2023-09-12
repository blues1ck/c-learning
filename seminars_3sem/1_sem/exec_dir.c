#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>

int main() {
	pid_t pid;
   	int status, died;
   	switch(pid = fork()) {
   		case 0: 
			execl("/bin/ls","ls","-l",NULL); // this is the code the child runs 
   		default: 
			wait(&status);
   	}
	return 0;
}