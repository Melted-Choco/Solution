#include <stdio.h>
#include <stdlib.h>

int main()
{
    int C, N;

    scanf("%d", &C);

    while (C--) {
        scanf("%d", &N);

        int* a = (int*)malloc(sizeof(int)*N);
        int sum = 0, up = 0;
        float avg, pct;

        for (int i = 0; i < N; i++) {
            scanf("%d", &a[i]);
            sum += a[i];
        }
        
        avg = sum / N;

        for (int j = 0; j < N; j++) {
            if (a[j] > avg) {
                up++;
            }
        }

        pct = (up / (float)N) * 100;

        printf("%.3f%%\n", pct);
    }
}