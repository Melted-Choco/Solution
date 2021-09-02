#include <stdio.h>
#define MIN -1000000
#define MAX 1000000

int main()
{
    int i, j, n, a, min = MAX, max = MIN;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a);

        if (a < min) {
            min = a;
        }
        if (a > max) {
            max = a;
        }
    }
    
    printf("%d %d", min, max);
}
