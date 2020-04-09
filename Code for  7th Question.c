#include<stdio.h>
int main()
{
	int i, type[20],n;
	int respT[20];
	
	printf("Number of processes:\n ");
	scanf("%d",&n);
	printf("Enter the data for the processes\n");
	for(i=0;i<n;i++)
	{
		printf("Response time of Processes %d (in milliseconds):\n ",i);
		scanf("%d",&respT[i]);
		if(respT[i]<1000)
		{
			type[i]=1;
		}
		else
		{
			type[i]=0;
		}

	}
	printf("Process Number\tResponse Time\tType\t\tPriority");
	for(i=0;i<n;i++)
	{
		printf("\nP%d\t\t%dms\t\t",i,respT[i]);
		if(type[i]==1)
		{
			printf("Interactive\tHigh");
		}
		else
		{
			printf("Non-Interactive\tLow");
		}

	}
	return 0;
}
