#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, j;
    double M = 0, sum = 0;
    scanf("%d", &N);

    double* a = (double*)malloc(sizeof(double)*N);

    for (i = 0; i < N; i++) {
        scanf("%lf", &a[i]);
        if (a[i] > M) {
            M = a[i];
        }
    }

    for (j = 0; j < N; j++) {
        a[j] = (a[j] / M) * 100;
        sum += a[j];
    }
    
    printf("%lf", sum / N);
}