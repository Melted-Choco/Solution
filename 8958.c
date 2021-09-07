#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Score(char* b);

int main()
{
    int i, N;
    scanf("%d", &N);

    int* a = (int*)malloc(sizeof(int)*N);

    for (i = 0; i < N; i++) {
        char* b = (char*)malloc(sizeof(char)*80);
        scanf("%s", b);
        
        a[i] = Score(b);

        printf("%d\n", a[i]);

        free(b);
    }

    free(a);
}

int Score(char* b)
{
    int i, s = 0, c = 0; // s : sum, c : current
    
    for (i = 0; i < strlen(b); i++) {
        if (b[i] == 'O') {
            c++;
        }
        else {
            c = 0;
        }

        s += c;
    }

    return s;
}