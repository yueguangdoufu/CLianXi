#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	printf("����һ��С��1000������:");
	scanf("%d",&a);
	if(a<1000)
	{
		b=sqrt(a);
		b=b/1;
	}
	printf("%d\n",b);
	return 0;
}