#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,r,c,i,j,k;
	int sum = 0;
	int **p, **t;
	
	printf("\n Enter the value of r and c.");
	scanf("%d %d", &r, &c);
	
	p=(int**)malloc(r*sizeof(int*));
	for(i=0; i<c; i++)
	{
		*(p+i)=(int*)malloc(c*sizeof(int*));
	}
	printf("Enter value of first matrix.");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			scanf("%d",*(p+i));
		}
	}
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d \t",**(p+i));
		}
		printf("\n");
	}
	t=(int**)malloc(r*sizeof(int*));
	for(i=0; i<c; i++)
	{
		*(t+i)=(int*)malloc(c*sizeof(int*));
	}
	printf("Enter value of second matrix.");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			scanf("%d",*(t+i));
		}
	}
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d \t",**(t+i));
		}
		printf("\n");
	}
	printf("\n The product of the matrix is.");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			sum=0;
			for(k=0; k<r; k++)
			{
				printf("%d\t",sum=sum+*(*p+i) * *(*t+k));
			}
			printf("\n");
		}
		
	}
	
	free(t);
	return 0;
}
