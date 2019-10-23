//selection sort
#include<stdio.h>

int main()
{
	int a[10],i,j,min_index,min;
	printf("\nEnter 10  numbers\t");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
 for(i=0;i<9;i++)
 {
 	min=a[i];
 	min_index=i;
 	for(j=i+1;j<10;j++)
 	{
 		if(a[j]<min)
 		{
 			min=a[j];
 			min_index=j;
 		}
 	}
 	a[min_index]=a[j];
 	a[i]=min;
 }
 for(i=0;i<10;i++)
 {
 	printf("%d",a[i]);
	  }
return 0;
}

