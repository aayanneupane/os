#include <stdio.h>
int main (){
	int n , bt[20],wt[20],tat[20];
	float avwt=0,avtat= 0 ;
	printf("enter the number of processes:");
	scanf("%d",&n);
	printf("enterd process burst time: \n");
    int	i=0;
	for (i=0;i<n;i++){
			printf("\n p[%d]:",i+1);
			scanf("%d",&bt[i]);
	}
	wt[0]=0;
	for (i=1;i<n;i++){
		wt[i]=0;
		int j =0;
		for(j=0;j<i;j++)
			wt[i] += bt[j];
		
	}
	printf("\n process \t burst time  \t waiting time \t TurnAround time ");
	for (i=0;i<n;i++){
		tat[i]=bt[i]+wt[i];
		avwt += wt[i];
		avtat += tat[i];
		printf("\n p[%d]\t\t %d\t\t%d \t\t%d \t",i+1,bt[i],wt[i],tat[i]);
	}
	avwt /= i;
	avtat /= i;
	printf("\n average waiting time : %.2f ",avwt);
	printf("average Turn around time : %.2f",avtat);
	return 0;
	}

