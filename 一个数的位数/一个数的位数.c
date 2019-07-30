#include<stdio.h>
int main()
{
	int a;
	int b,c,d,e,f;
	printf("输入一个小于五位的数：");
	scanf("%d",&a);
	if(a<=9)
	{
		printf("%d是一位数\n",a);
	}
	if(10<=a&&a<=99)
	{
		b=a/10;
		c=a%10;
		printf("%d是二位数,十位为%d，个位是%d\n",a,b,c);
	}
	if(100<=a&&a<=999)
	{
		b=a/100;
		c=(a%100)/10;
		d=a%10;
		printf("%d是三位数，百位是%d，十位是%d,个位是%d\n",a,b,c,d);
	}
	if(1000<=a&&a<=9999)
	{
		b=a/1000;
		c=(a%1000)/100;
		d=(a%100)/10;
		e=a%10;
		printf("%d是四位数，千位是%d，百位是%d,十位是%d，个位是%d\n",a,b,c,d,e);
	}
	if(10000<=a&&a<=99999)
	{
		b=a/10000;
		c=(a%10000)/1000;
		d=(a%1000)/100;
		e=(a%100)/10;
		f=a%10;
		printf("%d是五位数，万位是%d，千位是%d,百位是%d,十位是%d，个位是%d\n",a,b,c,d,e,f);
	}
	return 0;
}