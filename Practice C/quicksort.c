/*Quick Sort Algorithm */
#include <stdio.h>

void swap(int *, int *);
int partition(int [],int ,int);
void quickSort(int [],int ,int);

int main()
{
	int arr[] = {1,9,12,-23,100,-23,-234,0,-1};
	int size = sizeof(arr)/sizeof(int);
	printf("Initial array is\n");
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
	quickSort(arr,0,size-1);

	printf("\n\nSorted array is\n");
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);

	return 0;
}
void swap(int *a, int *b)
{
	int temp = *a;
		  *a = *b;
		  *b = temp;
}
int partition(int arr[],int p, int r)
{
	int i=p-1, pivot = arr[r];
	for(int j=p;j<r;j++)
	{
		if(pivot >= arr[j])
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[r]);

	return i+1;
}
void quickSort(int arr[],int p, int r)
{
	if(p<r)
	{
		int q = partition(arr,p,r);
		quickSort(arr,p,q-1);
		quickSort(arr,q+1,r);
	}
}