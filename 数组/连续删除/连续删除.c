#include<stdio.h>
int main()
{
	int a[9]={1,5,4,4,2,4,2,3,1};
	int i,loc,len,num;
	int j;
	char c;
	int count;
	len=9;
	printf("ԭ��������Ϊ:");
	for(i=0;i<9;i++)
		printf("%5d",a[i]);
	printf("\n");
	while(1)
	{
		count=0;
		printf("������Ҫɾ��������:");
		scanf("%d",&num);
		if(len==1)
		{
			printf("����Ϊ��!\n");
			break;
		}
		for(i=0;i<9;i++)
			if(a[i]==num)
				count++;
		if(count==0)
		{
			printf("�����ݲ���������!\n");
			break;
		}
		for(i=0;i<count;i++)
		{
			for(j=0;j<9;j++)
				if(a[j]==num)
				{
					loc=j;
					break;
				}
			for(j=loc;j<8;j++)
				a[j]=a[j+1];
		}
		len=len-count;
		printf("ɾ�������������Ϊ:");
		for(i=0;i<len;i++)
			printf("%5d",a[i]);
		printf("\n");
		printf("����?<Y/N>");
		getchar();
		c=getchar();
		if(c=='y'||c=='Y')
			continue;
		if(c=='N'||c=='n')
			break;
		if(c!='n'&&c!='N'&&c!='y'&&c!='Y')
		{
			printf("ָ�����!");
			break;
		}
	}
	return 0;
}