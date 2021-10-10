#include <stdio.h>

int main()
{
    int t, r;
    char s[21];
    scanf("%d", &t);
    while (t--) {
        scanf("%d %s", &r, s);
        
        for (int i = 0; i <= 20; i++) {
            if (s[i] == '\0') {
                break;
            }
            else {
                for (int j = 0; j < r; j++) {
                    printf("%c", s[i]);
                }
            }
        }
        printf("\n");
    }
}
