/*-------------------------------------------------------
【程序填空】
---------------------------------------------------------
题目：请输入一个大于100的正整数a，将a的百位、十位和个位依
      次放在b的个位、十位和百位上。
      例如：输入"321"，输出"结果是：123"。
-------------------------------------------------------*/
#include <conio.h>
#include <stdio.h>

main ()
{

    int a, b; //int == [1]
    printf("请输入一个大于100的正整数: ");

    scanf("%d", &a); //scanf == [2]
    b = (a % 10) * 100 + ((a / 10) % 10) * 10 + (a / 100) % 10;

    printf("结果是: %d\n", b); //b == [3]
}