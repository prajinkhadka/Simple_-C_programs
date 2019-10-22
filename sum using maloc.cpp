#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j,row,col;
	int **a,**b,**c;
	scanf("%d%d",&row,&col);
	a=(int**)malloc(row*sizeof(int*));
	b=(int**)malloc(row*sizeof(int*));
	c=(int**)malloc(row*sizeof(int*));
	//allocating memory for rows and columns
	for(i=0;i<row;i++)
	{
		*(a+i)=(int*)malloc(col*sizeof(int));
		*(b+i)=(int*)malloc(col*sizeof(int));
		*(c+i)=(int*)malloc(col*sizeof(int));
	}
	printf("\nEnter first matrix");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",*(a+i)+j);
		}
	}
	printf("\nEnter second matrix");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",*(b+i)+j);
		}
	}
	//sum of two
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
		*(*(c+i)+j)=*(*(a+i)+j) + *(*(b+i)+j);
		}
	}
	printf("\nThe result matrix is");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d",*(*(c+i)+j));
		}
		printf("\n");
	}
	return 0;
}

