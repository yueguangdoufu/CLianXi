#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("����һ����λ����");
	scanf("%d",&a);
	b=a/1000;
	c=(a%1000)/100;
	d=(a%100)/10;
	e=a%10;
	printf("ǧλΪ��%d��λΪ��%dʮλΪ��%d��λΪ��%d\n",b,c,d,e);
	return 0;
}