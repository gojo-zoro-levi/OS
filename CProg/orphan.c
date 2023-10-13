#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>

int main(){
//Fork return process id
//in parent process
pid_t child_pid = fork();

//child process
if(child_pid == 0){
 sleep(10);
printf("Child process completed.");
}

//parent process
else{
printf("\nParent process is completed\n");
 exit(0);
}
return 0;

}
