#include <stdio.h>

int main()
{
    int max = 0, num, i, n;

    for (i = 0; i < 9; i++) {
        scanf("%d", &num);

        if (num > max) {
            max = num;
            n = i + 1;
        }
    }

    printf("%d\n%d", max, n);
}