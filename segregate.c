#include<stdio.h>
#include<stdlib.h>

void printArray(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return;
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void segregate(int *arr,int n)
{
	//int swap;
	int left_index=0,right_index=n-1;
	
	while(left_index < right_index)
	{
		while(arr[left_index]%2==0 && left_index < right_index)
		{
			left_index++;
		}
		while(arr[right_index]%2==1 && right_index > left_index)
		{
			right_index--;
		}
		if(left_index < right_index)
		{
			swap(&arr[left_index],&arr[right_index]);
			left_index++;
			right_index--;
		}
	}
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int arr[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		segregate(arr,n);
		//printf("After segregation:\n");
		printArray(arr,n);
	}
	return 0;
}

