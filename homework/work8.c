/*程序填空：程序功能为：从键盘输入一个数，若为正数则输出1，
若为负数则输出-1，若为零则输出0*/
#include <stdio.h>
int main()
{
 double x,y;
	printf("请输入一个数:");
	scanf("%lf",&x);
	if(x>0) y=1;
	else if(x==0);
	else y=-1;
	printf("%f",y);
}