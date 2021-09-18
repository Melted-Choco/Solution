#include <stdio.h>

int main()
{
    int n, i, t = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i < 100) {
            t++;
        }
        else if (i < 1000) {
            if ((i/10)%10 - i/100 == i%10 - (i/10)%10) {
                t++;
            }
        }
    }
    printf("%d", t);
}