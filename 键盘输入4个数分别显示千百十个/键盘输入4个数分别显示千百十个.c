#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("输入一个四位数：");
	scanf("%d",&a);
	b=a/1000;
	c=(a%1000)/100;
	d=(a%100)/10;
	e=a%10;
	printf("千位为：%d百位为：%d十位为：%d个位为：%d\n",b,c,d,e);
	return 0;
}