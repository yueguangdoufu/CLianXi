#include<stdio.h>
int main()
{
	double a,b,c,ave;
		printf("请输入三个数：");
		scanf("%lf%lf%lf",&a,&b,&c);
		ave=(a+b+c)/3.0;
		printf("%lf,%lf,%lf",a,b,c);
		printf("三个数的平均值是：%lf\n",ave);
	return 0;
}