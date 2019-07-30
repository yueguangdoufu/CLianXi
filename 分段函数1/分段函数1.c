#include<stdio.h>
int main()
{
	double x,y;
	printf(" ‰»Îx£∫");
	scanf("%lf",&x);
	if(x<1)
		printf("y=%lf\n",x);
	else if(1<=x&&x<10)
	{
		y=2*x-1;
		printf("y=%lf\n",y);
	}
	else if(x>=10)
	{
		y=3*x-11;
		printf("y=%lf\n",y);
	}
	

	return 0;
}