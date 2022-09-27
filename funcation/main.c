#include<stdio.h>

void fun_1();
void fun_2();
void fun_3();

int main(void) {

    int select = 0;

    printf("Please input mode 1 - 100 > ");
    scanf("%d", &select);

    switch (select)
    {
    case 1:
        fun_1();
        break;
    
    case 2:
        fun_2();
        break;

    case 3:
        fun_3();
        break;

    default:
        printf("GG");
        break;
    }

    return 0;
}

void fun_1() {

    int a, b, c;

    for (a = 1; a <= 9; a++) {
        
        for (b = 1; b <= 9; b++) {

            for (c = 1; c <= 9; c++) {

                if (a != b && b != c && a != c) {

                    printf("%d, %d, %d\n", a, b, c);
                }
            }
        }
    }
}

void fun_2() {

    double I;
    double bonus, bonus_1, bonus_2, bonus_3, bonus_4, bonus_5;

    bonus_1 = 100000 * 0.1;
    bonus_2 = bonus_1 + 100000 * 0.075;
    bonus_3 = bonus_2 + 200000 * 0.05;
    bonus_4 = bonus_3 + 200000 * 0.03;
    bonus_5 = bonus_4 + 400000 * 0.015;

    printf("Please input profit > ");
    scanf("%lf", &I);

    if (I <= 100000) {

        bonus = I * 0.1;
    } else if (I <= 200000) {

        bonus = bonus_1 + (I - 100000) * 0.075;  
    } else if (I <= 400000) {

        bonus = bonus_2 + (I - 200000) * 0.05;  
    } else if (I <= 600000) {

        bonus = bonus_3 + (I - 200000) * 0.03;  
    } else if (I <= 1000000) {

        bonus = bonus_4 + (I - 400000) * 0.015;  
    } else if (I > 1000000) {

        bonus = bonus_5 + (I - 400000) * 0.01;  
    }

    printf("bonus = %lf", bonus);
}

void fun_3() {

    int  i, j, m, n, x;

    for (i = 1; i < 168 / 2 + 1; i++)
    {

        if (168 % i == 0)
        {

            j = 168 / i;
            if ( i > j && (i + j) % 2 == 0 && (i - j) % 2 == 0)
            {

                m = (i + j) / 2;
                n = (i - j) / 2;
                x = n * n - 100;

                printf ("%d + 100 = %d * %d\n", x, n, n);
                printf ("%d + 268 = %d * %d\n", x, m, m);
            }
        }
    }
}