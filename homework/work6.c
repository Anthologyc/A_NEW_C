/*程序填空：程序功能为：从键盘输入两个不相等的数，输出较大数*/
#include <stdio.h>
int main()
{
	int a,b,max;
	printf("请输入两个整数:");
	scanf("%d%d",&a,&b);
	max = a;
	if(a>b) max = b;
	printf("较大数是%d",max);
}
