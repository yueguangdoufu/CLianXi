#include<stdio.h>
int main()
{
	int a[8]={1,4,5,7,9};
	int i,num,len;
	int loc;
	char n;
	len=5;
	for(i=0;i<len;i++)
		printf("%5d",a[i]);
	printf("\n");
	while(1)
	{
		loc=len;
		printf("请输入插入数据num=");
		scanf("%d",&num);
		if(len==8)
		{
			printf("数组没有空间!\n");
			break;
		}
		for(i=0;i<len;i++)
			if(a[i]>num)
			{
				loc=i;
				break;
			}
		for(i=7;i>loc;i--)
			a[i]=a[i-1];
		a[loc]=num;
		len++;
		for(i=0;i<len;i++)
			printf("%5d",a[i]);
		printf("\n");
		printf("继续?<Y/N>:");
		getchar();
		scanf("%c",&n);
		if(n=='y'||n=='Y')
			continue;
		if(n=='N'||n=='n')
			break;
		if(n!='n'&&n!='N'&&n!='y'&&n!='Y')
		{
			printf("指令错误!");
			break;
		}
	}
	return 0;
}