#include<stdio.h>
int main()
{
	int i;
	double Xn,a;
	printf("输入a的值：");
	scanf("%lf",&a);
	i=1;
	Xn=a;
	while(i<=2)
	{
		Xn=(Xn+a/Xn)/2;
		i++;
	}
	printf("%lf的平方根为%lf\n",a,Xn);
	return 0;
}