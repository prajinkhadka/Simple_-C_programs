//bubble sort algorithm

#include<stdio.h>

int main()
{
	int a[10],i,j,temp;
	printf("\nEnter 10  numbers\t");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	//bubble sort algorithm
	for(i=0;i<9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}	
	}
	printf("\nThe sorted array is:\n");
	for(i=0;i<10;i++)
	{
		printf("\t%d",a[i]);
	}
	return 0;
}
