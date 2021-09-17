#include <stdio.h>

void Self_Number();

int main()
{
    Self_Number();
}

void Self_Number()
{
    int self_num[10001] = {0};
    int i, d;
    
    for (i = 1; i <= 10000; i++) {
        if (i < 10) {
            d = i + i;
        }
        else if (i < 100) {
            d = i + i/10 + i%10;
        }
        else if (i < 1000) {
            d = i + i/100 + (i/10)%10 + i%10;
        }
        else if (i < 10000) {
            d = i + i/1000 + (i/100)%10 + (i/10)%10 + i%10;
        }
        else {
            d = 10001;
        }

        if (d <= 10000) {
            self_num[d] = 1;
        }
    }

    for (i = 1; i <= 10000; i++) {
        if (self_num[i] == 0) {
            printf("%d\n", i);
        }
    }
}