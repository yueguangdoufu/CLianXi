#include<stdio.h>
#include<math.h>
int main()
{
	double r,h,c,s1,s2,v1,v2,a;
	a=3.14;
	printf("������Բ�İ뾶r��Բ���ĸ�h�����������ÿո��������");
	scanf("%lf %lf",&r,&h);
	c=a*r*2;
	printf("Բ���ܳ�Ϊ��%5.2lf\n",c);
	s1=a*pow(r,2);
	printf("Բ�����Ϊ��%5.2lf\n",s1);
	s2=4*a*pow(r,2);
	printf("Բ��ı������%5.2lf\n",s2);
	v1=(4/3)*a*pow(r,3);
	printf("Բ��������%5.2lf\n",v1);
	v2=a*pow(r,2)*h;
	printf("Բ�����Ϊ��%5.2lf\n",v2);
	return 0;
}