#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int function1(int x[6], int i, int sum);

int main(void)
{
    int i, x[6], y, sum = 0;
    srand(time(NULL));
    // x[0] = 1;
    // x[1] = 2;
    // x[2] = 3;
    // x[3] = 3;
    // x[4] = 2;
    // x[5] = 1;
    for (i = 0; i < 6; i++)
    {
        x[i] = rand() % 2;
        printf("%d\t", x[i]);
    }
    
    printf("\n");
    i = -1;
    int pl = function1(x, i, sum);
    if (pl == 4)
        printf("Einai summetrikos\n");
    else
        printf("Den einai summetrikos kai xalaei h summetria sthn thesh %d\n", pl);
    return 0;
}

int function1(int x[6], int i, int sum)
{
    int k;
    i++;
    if (i <= 3 && x[i] == x[5 - i])
    {
        sum++;
        return function1(x, i, sum);
    }
    else
        return k = i;
}