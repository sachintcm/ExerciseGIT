#include<stdio.h>

#define N 5

int main()
{
	int i,j,temp,list[N];

	printf("enter an aray\n");
	
	for(i=0;i<N;i++)
	{
		scanf("%d",&list[i]);
	}

	printf("display the aray \n");
	for(i=0;i<N-1;i++)
	{
		printf("%d\t",list[i]);
	}

	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(list[i]>list[j])
			{
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
		}
	}

	printf("\nprinting the array in ascending order \n");
	for(i=0;i<N;i++)
	{
		printf("%d\n",list[i]);
	}
}

