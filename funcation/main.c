#include<stdio.h>

int main(void) {

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

    return 0;
}