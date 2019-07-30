#include<stdio.h>
int main()
{
	int a[7]={1,2,3,4,5,6,7};
	int i,count,k;
	i=0;
	k=0;
	count=0;
	while(1)
	{
		if(a[i]!=0)
			k++;
		if(k==3)
		{
			a[i]=0;
			k=0;
			count++;
		}
		i++;
		if(i==7)
			i=0;
		if(count==6)
			break;
	}
	for(i=0;i<7;i++)
		if(a[i]!=0)
			printf("%d\n",a[i]);
	return 0;
}