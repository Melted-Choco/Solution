#include <stdio.h>

int main()
{
    int i, j, a, m, s = 0, arr[10];

    scanf("%d", &a);
    arr[s] = a % 42;
    s++;

    for (i = 1; i < 10; i++) {
        scanf("%d", &a);
        m = a % 42;
        arr[s] = m;

        for (j = 0; j < s; j++) {
            if (arr[s] == arr[j]) {
                s--;
                break;
            }
        }

        s++;
    }

    printf("%d", s);
}