#include <stdio.h>

int main()
{
    int i, a, b, c, n, m, result[10] = {0};
    scanf("%d %d %d", &a, &b, &c);
    n = a * b * c;

    while (n != 0) {
        m = n % 10;
        n = n / 10;
        result[m]++;
    }

    for (i = 0; i < 10; i++) {
        printf("%d\n", result[i]);
    }
}