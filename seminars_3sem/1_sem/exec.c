#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(){
	int id = fork();
	if (id == 0){
		char command[] = "/bin/cd test/ls";
		execl(command, "ls", NULL);
	}
	return 0;
}

