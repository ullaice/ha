#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


int main(int argc, char *argv[]) {

	int stat;
	pid_t pid;	
	if (argc != 2) {
		printf("execute: argc error\n");
		exit(-1);
	}

	printf("********** execute start **********\n");

	// make child process 
	// and execute cat (do not use just "cat", use another name)	
	//
	// use fork(), exec family
	//
	pid=fork();
	if(pid==-1){
		printf("err\n");
		exit(0);
	}
	
	if(pid==0){
		execlp("./mycat","./mycat",argv[1],NULL);
		exit(0);
	}else{
	wait(&stat);
	printf("********** execute finish **********\n");
	exit(0);
	}
	return 0;
}
