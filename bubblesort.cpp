#include <stdio.h>
#define MAX 50

void bubblesort(int arr[],int size)
{
	int i,j,gecici;
	for(i=0; i<size; i++)
	{
		for(j=1; j<size; j++)
		if(arr[j-1]>arr[j])
		{
			gecici=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=gecici;
		}
	}
}
int main()
{
	int array[MAX],size;
	int i;
	printf("Kac elemanli: ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	bubblesort(array,size);
	for(i=0; i<size; i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}
