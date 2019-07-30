//列题1.1
#include<stdio.h>   //这是编译预处理指令
int main()   //定义主函数
{   //函数开始的标志
	printf("This is a C program.\n");   //输出的一串字符
	return 0;   //函数执行后返还数值0
}   //函数结束标志
//列题1.2
#include<stdio.h>    //这是编译预处理指令
int main()   //定义主函数
{   //函数开始标志
	int a,b,sum;   //指示函数a，b，sum都是整型函数
	a=123;   //对a进行赋值
	b=789;   //对b赋值
	sum=a+b;   //进行a+b的运算，并将结果放入sum中
	printf("sum is %d\n",sum);   //输出结果sum
	return 0;   //返还数值0
}  //函数结束标志
