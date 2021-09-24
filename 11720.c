#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    char* num = (char*)malloc(sizeof(char)*n);
    scanf("%s", num);
    for (int i = 0; i < n; i++) {
        sum += (int)(num[i] - 48);
    }
    printf("%d", sum);
    free(num);
}
