#include <stdio.h>
#define MAX 50

void selectionsort(int arr[],int size)
{
	int i,j;
	int min;
	int gecici;
	for(i=0;i<size;i++)
	{
		int min=i;
		for(j=i;j<size;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		gecici= arr[i];
		arr[i]=arr[min];
		arr[min]=gecici;
	}
}

int main()
{
	int array[MAX],size;
	int i;
	printf("Kac elemanli: ");
	scanf("%d",&size);
	for(i=0; i<size; i++)
	{
		scanf("%d",&array[i]);
	}
	selectionsort(array,size);
	for(i=0;i<size; i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}
