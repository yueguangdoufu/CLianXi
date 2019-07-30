#include<stdio.h>
int main()
{
	int i,n,t,ai,bi;
	double sum1,sum2,sum,ci;
	printf("输入n的项数：");
	scanf("%d",&n);
	ai=1;
	bi=1;
	i=1;
	sum1=0;
	sum2=0;
	while(i<=n)
	{
		t=ai;
		ai=bi;
		bi=ai+t;
		ci=((double)t)/ai;
		if(i%4==1||i%4==0)
			sum1=sum1+ci;
		if(i%4==2||i%4==3)
			sum2=sum2-ci;
		sum=sum1+sum2;
		i++;
	}
	printf("sum=%lf\n",sum);
	return 0;
}