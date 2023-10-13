#include<stdio.h>
//Program to simulate the CPU scheduling algorithm First Come First Serve(FCFS)

//CPU scheduling - The order in which the processes should be executed.
//It is required to maximize CPU utlization throughput
//It minimize ['Waiting time', 'turn around time', 'response time']

//Process ID - pid, Burst Time - bt, Waiting Time - wt, Turn around time - tat

void main(){
int n;

//Asking user to enter number of processess
printf("\nEnter the number of process(ess): ");
scanf("%d",&n);

//Initalizing all the variables
//int pi[n];
int bt[n];
int wt[n];
int tat[n];
float awt= 0;
float atat= 0;


//printf("\n Therefore the number of processess = %d.",n);
//printf("\n Enter the process: ");
//for(int i = 0; i<n ; i++){
//	scanf("%d",pi+i);
//}

//Asking user to enter burst time 
printf("\n Enter the  burst time: ");
for(int i = 0;  i<n; i++){
	scanf("%d",bt+i);
}


wt[0] = 0;
tat[0] = bt[0];

//Entering waiting time and turn around time in the array
for(int i=1 ; i<n; i++){
	wt[i] = bt[i-1] + wt[i-1];
	tat[i] = tat[i -1] + bt[i];
}

//Printing the table 
printf("Processess , Burst Time , Waiting Time , Turn arround time");

for(int i=0; i<n; i++){
	printf("\n     P%d    ,       %d    ,      %d     ,       %d   ",i,bt[i],wt[i],tat[i]);
	awt = awt + wt[i];
	atat = atat + tat[i];
	//printf("\n awt = %f, atat = %f",awt, atat);
}
//printf("\n awt = %d, atat = %d",awt, atat);
printf("\n Average waiting time = %f", awt/n);
printf("\n Average turn around time = %f\n", atat/n);

}
