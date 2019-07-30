#include<stdio.h>
int main()
/*{
	char c1,c2;
	c1=getchar();
	c2=getchar();
	printf("c1=");
	putchar(c1);
	putchar('\n');
	printf("c2=");
	putchar(c2);
	putchar('\n');
	return 0;
}*/
{
	char c1,c2;
	scanf("%c %c",&c1,&c2);
	printf("%d,%d\n",c1,c2);
	return 0;
}