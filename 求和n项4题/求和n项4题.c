#include<stdio.h>
int main()
{	
	int i,n,ai,bi,t;
	double sum,ci,sum1,sum2;
	printf("ÇëÊäÈënÏî£º");
	scanf("%d",&n);
	i=1;
	ai=1;
	bi=1;
	sum1=0;
	sum2=0;
	while(i<=n)
	{
		t=ai;
		ai=bi;
		bi=ai+t;
		ci=((double)t)/ai;
		if(i%2!=0)
			sum1=sum1+ci;
		if(i%2==0)
			sum2=sum2-ci;
		sum=sum1+sum2;
		i++;
	}
	printf("sum=%lf\n",sum);
	return 0;
}