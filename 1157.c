#include <stdio.h>
#define SIZE 1000000

int main()
{
    char a;
    char b[SIZE];
    int alp[26] = {0};
    int i = 0, equal = 0, maxIndex = 0;
    scanf("%s", b);

    while (b[i] != '\0') {
        if (b[i] >= 65 && b[i] < 91) { // 대문자
            alp[(int)b[i] - 65]++;
        }
        else if (b[i] >= 97 && b[i] < 123) { // 소문자
            alp[(int)b[i] - 97]++;
        }

        i++;
    }

    for (int j = 1; j < 26; j++) {
        if (alp[maxIndex] < alp[j]) {
            maxIndex = j;
        }
    }

    for (int k = 1; k < 26; k++) {
        if (maxIndex != k && alp[maxIndex] == alp[k]) {
            equal = 1;
        }
    }

    if (equal == 0) {
        printf("%c", maxIndex + 65);
    }
    else {
        printf("?");
    }
}
