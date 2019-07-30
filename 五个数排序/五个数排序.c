#include<stdio.h>
int main()
{
	double a,b,c,d,e;
	double t;
	printf("输入五个数：");
	scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&e);
	if(a>b)
	{
		t=a;
		a=b;
		b=t;
	}
	if(a>c)
	{
		t=a;
		a=c;
		c=t;
	}
	if(a>d)
	{
		t=a;
		a=d;
		d=t;
	}
	if(a>e)
	{
		t=a;
		a=e;
		e=t;
	}
	////////////
	if(b>c)
	{
		t=b;
		b=c;
		c=t;
	}
	if(b>d)
	{
		t=b;
		b=d;
		d=t;
	}
	if(b>e)
	{
		t=b;
		b=d;
		d=t;
	}
	//////////
	if(c>d)
	{
		t=c;
		c=d;
		d=t;

	}
	if(c>e)
	{
		t=c;
		c=e;
		e=t;
	}
	//////////
	if(d>e)
	{
		t=d;
		d=e;
		e=t;

	}
	printf("五个数从小到大的顺序为:%lf，%lf，%lf，%lf，%lf\n",a,b,c,d,e);
	return 0;
}