/*-------------------------------------------------------
【程序填空】
---------------------------------------------------------
功能：要求输出结果为：
      A，B
      65，66
-------------------------------------------------------*/
#include <stdio.h>

main ()
{

    char a, b;//b == [1]

    a = 'a';//'a' == [2]
    b = 'b';

    a = a - 32;
    b = b - 32;//32 == [3]
    
    printf("%c, %c\n%d, %d\n", a, b, a, b);
}