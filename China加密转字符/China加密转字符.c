/*#include<stdio.h>
int main()
{
	char c1,c2,c3,c4,c5;
	printf("������China��");
	scanf("%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5);
	c1=c1+4;
	c2=c2+4;
	c3=c3+4;
	c4=c4+4;
	c5=c5+4;
	printf("%c%c%c%c%c\n",c1,c2,c3,c4,c5);
	return 0;
}*/
#include<stdio.h>
int main()
{
	char c1,c2,c3,c4,c5;
	printf("������China��");
	c1=getchar();
	c1=c1+4;
	c2=getchar();
	c2=c2+4;
	c3=getchar();
	c3=c3+4;
	c4=getchar();
	c4=c4+4;
	c5=getchar();
	c5=c5+4;
	putchar(c1);
	putchar(c2);
	putchar(c3);
	putchar(c4);
	putchar(c5);
	putchar('\n');
	return 0;
}
