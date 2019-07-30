#include<stdio.h>
#include<math.h>
int main()
{
	double r,h,c,s1,s2,v1,v2,a;
	a=3.14;
	printf("请输入圆的半径r和圆柱的高h（输入数字用空格隔开）：");
	scanf("%lf %lf",&r,&h);
	c=a*r*2;
	printf("圆的周长为：%5.2lf\n",c);
	s1=a*pow(r,2);
	printf("圆的面积为：%5.2lf\n",s1);
	s2=4*a*pow(r,2);
	printf("圆球的表面积：%5.2lf\n",s2);
	v1=(4/3)*a*pow(r,3);
	printf("圆球的体积：%5.2lf\n",v1);
	v2=a*pow(r,2)*h;
	printf("圆柱体积为：%5.2lf\n",v2);
	return 0;
}