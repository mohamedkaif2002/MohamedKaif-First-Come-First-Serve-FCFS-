First Come First Serve (FCFS) Scheduling Algorithm.
FCFS Scheduling algorithm automatically executes the queued processes and requests in the order of their arrival. It allocates the job that first arrived in the queue to the CPU, then allocates the second one, and so on. FCFS is the simplest and easiest CPU scheduling algorithm, managed with a FIFO queue

ALGORITHM:
1.	Read the number of processes and burst time of each process.
2.	Set the waiting time of the first process as zero.
3.	For other process, the waiting time of the process is compiled as the sum of the waiting time of previous process and the burst time of the previous process.
4.	Draw the Gantt chart and display the sequence in which the process are served in the Gantt chart.
5.	Compute the turnaround time of all process as the sum of the waiting time, of the process and the burst time of the process
6.	Compute the average turnaround time and the average waiting time.

