#include <stdio.h>

int main()
{
    char word[100];
    int j;
    scanf("%s", word);
    for (int i = 0; i <= 25; i++) {
        j = 0;
        while (word[j] != '\0') {
            if (word[j] == i + 97) {
                printf("%d ", j);
                break;
            }
            else {
                j++;
            }
        }
        if (word[j] == '\0') {
            printf("%d ", -1);
        }
    }
}
