#include<stdio.h>
int main()
{
	int i;
	double sum,n;
	i=1;
	n=100;
	sum=0;
	while(i<=100)
	{
		sum=sum+n;
		n=n/2;
	
		if(i==10)
			printf("反弹高度：%lf,路程：%lf\n",n,sum);
		i++;
	}
	return 0;
}