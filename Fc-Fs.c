#include<stdio.h>
int main()
{
int num,i,j,temp,wait[20], bur[20], turn[20];
float avgwt=0,avgturn=0;
printf("\nImplementation of the FCFS algorithm");
printf("\n\nEnter the number of process:"); //Declare the How Many Process Want to Use. 
scanf("%d",&num);
for(i=0;i<num;i++)
{
printf("Enter the burst time for process P%d:",i+1); //Declare the BurstTime in Each Process.
scanf("%d",&bur[i]);
}
wait[0]=0;
temp=0;
for(i=1; i<=num; i++)
{
wait[i]=bur[i-1]+temp;
temp=wait[i];
}
printf("\nGANTT CHART\n");   //Create Gantt Chart.
printf("\n____________________________________________________________\n");
for(i=0; i<num; i++)
printf("P%d|",i+1);
printf("\n____________________________________________________________\n");
for(i=0; i<=num; i++)
printf("%d\t", wait[i]);     //Calculate the WaitingTime in Each Process..
printf("\n\n\n________________________________________________________________________\n"); // Create Calculation Table.
printf("\n PROCESS   BURSTTIME   WAITINGTIME   TURNAROUNDTIME\n");
printf("\n____________________________________________________________________________\n");
for(i=0; i<num; i++)
{
turn[i]=wait[i]+bur[i];                                            //Calculate the TurnAroundTime..
printf("\nP%d\t\t%d\t\t%d\t\t%d", i+1, bur[i], wait[i], turn[i]);
avgwt=avgwt+wait[i];          //Calculate the Average WaitingTime.
avgturn=avgturn+turn[i];      //Calculate the Average  TurnAroundTime.
}
printf("\n\nAverage Waiting time is %f", avgwt/num);
printf("\nAverage Turnaround time is %f", avgturn/num);
}
