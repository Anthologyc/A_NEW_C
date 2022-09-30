/*
C语言作业：2.功能：求一元二次方程的根，设二次项系数a不为零，
且b^2-4ac>=0,要求两个根输出时最小宽度为6位，
保留两位小数，按制表位输出
*/

#include<stdio.h>
#include<math.h>

int main(void)
{

    int a, b, c;
    float x1, x2, d;

    printf("请输入一元二次方程各项系数\n");
    printf("> ");

    scanf("%d%d%d", &a, &b, &c);

    d = pow(b, 2) - 4 * a * c;
    x1 = (-b + sqrt(d)) / (2 * a);
    x2 = (-b - sqrt(d)) / (2 * a);

    printf("x1 = %6.2f\tx2 = %6.2f\n", x1, x2);

    return 0;
}