#include <stdio.h>
#include <unistd.h>

int main(){
	int id = fork();
	//printf("Hello, world from id: %d!\n", id);
	if (id == 0){
		printf("Hello from the child process!\n");
	}	else{
		printf("Hello from the main process!\n");
	}
	
	return 0;
}