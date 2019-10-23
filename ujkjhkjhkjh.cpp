#include<stdio.h>

int main()
{
	int n,i,b=2,s[20],x[20],y[20],k=0,l=0,q,c=0,d=0;
	printf("\n Enter a numbers: ");
	scanf("%d %d",&n,&q);
	while(n!=0)
	{
		x[k]=n%b;
		n=n/b;
		k++;
	}
	k=0;
	while(q!=0)
	{
		y[k]=q%b;
		q=q/b;
		k++;
	}
	
	for(i=0;i<k;i++)
	{
		d=(x[i]+y[i]+c)/2;
		s[i]=x[i]+y[i]+(c-d-d);
		c=d;
	}
	s[k]=c;
	printf("The sum is :");
	for(i=k;i>=0;i--)
		printf("%d",s[i]);
		
		
	for(i=0;i<k;i++)
	{
		if(y[i]=1)
		{
			s[i]=x[20]<<i;
		}
		else
			s[i]=0;
	}	
	int p=0,j;
	for(j=0;j<k;j++)
		p=p+s[j];
	printf("%d",p);	
	return 0;	
}
