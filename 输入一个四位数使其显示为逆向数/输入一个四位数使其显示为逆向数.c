#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("����һ����λ��:");
	scanf("%d",&a);
	b=a/1000;
	c=(a%1000)/100;
	d=(a%100)/10;
	e=a%10;
	printf("�����λ��������Ϊ��%d%d%d%d\n",e,d,c,b);
	return 0;
}