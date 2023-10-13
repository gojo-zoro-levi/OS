#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>

int main(){
//Fork return process id
//in parent process
pid_t child_pid = fork();

//parent process
if(child_pid > 0){ 
sleep(5);
printf("\n Parent Process is completed");

}

//child process
else {
printf("\n Child Process is completed. ");
exit(0);
}

return 0;

}
