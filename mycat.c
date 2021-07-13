#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

int main(int argc, char *argv[]) {

	int fd; //file descripter
	char buf[BUF_SIZE]; //read buffer

	if (argc != 2) { //argc,argv error check
		printf("cat: argc error\n");
		exit(1);
	}

	printf("********** read %s start **********\n", argv[1]);

	//use open(), read() close()

	//open file
	//


	if((fd=open(argv[1],O_RDONLY))<0){
		printf("error");
		exit(1);

	}


	//read file
	//

	read(fd,buf,BUF_SIZE);
	puts(buf);

	//close file
	
	close(fd);

	printf("********** read %s finish **********\n", argv[1]);
	return 0;
}
