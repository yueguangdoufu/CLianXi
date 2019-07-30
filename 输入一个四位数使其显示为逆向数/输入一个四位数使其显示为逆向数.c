#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("输入一个四位数:");
	scanf("%d",&a);
	b=a/1000;
	c=(a%1000)/100;
	d=(a%100)/10;
	e=a%10;
	printf("这个四位数的逆数为：%d%d%d%d\n",e,d,c,b);
	return 0;
}