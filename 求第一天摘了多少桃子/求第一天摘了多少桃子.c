#include<stdio.h>
int main()
{
	int i,sum;
	i=1;
	sum=1;
	while(i<=10)
	{
		if(i>=2)
		sum=(sum+1)*2;
		i++;
	}
	printf("sum=%d\n",sum);
	return 0;
}