#include<stdio.h>
int main()
{
	int i;
	double Xn,a;
	printf("����a��ֵ��");
	scanf("%lf",&a);
	i=1;
	Xn=a;
	while(i<=2)
	{
		Xn=(Xn+a/Xn)/2;
		i++;
	}
	printf("%lf��ƽ����Ϊ%lf\n",a,Xn);
	return 0;
}