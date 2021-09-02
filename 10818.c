#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, min, max;
    scanf("%d", &n);

    int* a = (int*)malloc(sizeof(int)*n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    min = a[0];
    max = a[0];

    for (j = 1; j < n; j++) {
        if (a[j] > max) {
            max = a[j];
        }
        else if (a[j] < min) {
            min = a[j];
        }
    }

    printf("%d %d", min, max);

    free(a);
}
