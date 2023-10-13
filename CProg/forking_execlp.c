#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main(){
 pid_t pid;
 pid = fork();
 if(pid < 0){
 	fprintf(stderr,"Fork Failed");
	return 1;
}
 else if(pid ==0){
	printf("This is child process[program]\n");
	printf("[Program to reverse a number written in python, called from 'C']\n");
	//printf("[Program to open manual about gcc\n");
	printf("\n.......................................................\n");
	execlp("python","python","r.py",NULL);
	//execlp("man","man","ls",NULL);
}

else {
 wait(NULL);
	printf("\n.......................................................\n");

 printf("\n....Child Complete....");
}
return 0;
}
