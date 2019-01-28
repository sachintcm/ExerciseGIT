#include<stdio.h>

#define SIZE 7

int main()
{
	int size, i=0;
	float array[size];
	printf("Enter the size of array : ");
	scanf("%d",&size);
	printf("Size = %d \r\n", size);
	for(i = 0; i< size; i++)
	{
		array[i] = 100/i;
		printf("array[%d] = %f \n",i ,array[i]);
	}
	
	printf("Array with predefined size\n");

	for(i = 0; i< SIZE; i++)
	{
		array[i] = 100/i;
		printf("array[%d] = %f \n",i ,array[i]);
	}
return 0;
}
