#include <stdio.h>

int Function(int i);

int main()
{
    int n, i, t = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        t += Function(i);
    }
    printf("%d", t);
}

int Function(int i)
{
    if (i < 100) {
        return 1;
    }
    else if (i < 1000) {
        if ((i/10)%10 - i/100 == i%10 - (i/10)%10) {
            return 1;
        }
        else {
            return 0;
        }
    }
    return 0;
}