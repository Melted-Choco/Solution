#include <stdio.h>

int main()
{
    int n, m, c = 0;
    scanf("%d", &n);
    m = (n/10 + n%10)%10 + (n%10)*10;
    c++;
    while (n != m) {
        m = (m/10 + m%10)%10 + (m%10)*10;
        c++;
    }
    printf("%d", c);
}