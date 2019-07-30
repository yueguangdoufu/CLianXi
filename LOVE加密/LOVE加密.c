#include<stdio.h>
int main()
{
	char l,o,v,e;
	printf("请输入love：");
	scanf("%c%c%c%c",&l,&o,&v,&e);
	l=(l/2)+5;
	o=(o/2)+5;
	v=(v/2)+5;
	e=(e/2)+5;
	printf("love的加密码为：%c%c%c%c\n",l,o,v,e);
	return 0;
}
