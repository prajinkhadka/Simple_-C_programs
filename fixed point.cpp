#include<stdio.h>

int main()
{
	float xo=2,xinc,x;
	printf("\n__________________xn____________________xn+1");
	x=xo;
	while(x!=xinc)
	{
		xinc=(3-x)/(2*x);
		printf("\n%________________%f_____________________%f",x,xinc);
		x=xinc;
	}
	return 0;
}
