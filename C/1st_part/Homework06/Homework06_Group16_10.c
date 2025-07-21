#include <stdio.h>

int main(void)
{
    int i, j, x[5][5];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == j || i + j == 4)
                x[i][j] = 1;
            else if ((i == 0 || i == 1) &&  (j == 1 || j == 2 || j == 3) && i < 2)
                x[i][j] = 2;
            else if ((i == 3 || i == 4) && (j == 1 || j == 2 || j == 3) && i + j > 4)
                x[i][j] = 4;
            else if ((j == 0 || j == 1) && (i == 1 || i == 2 || i == 3) && j < 2)
                x[i][j] = 5;
            else if ((j == 3 || j == 4) && (i == 1 || i == 2 || i == 3) && j > 2)
                x[i][j] = 3;
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            printf("%d\t", x[i][j]);
        printf("\n");
    }
    return 0;
}

// 1 2 2 2 1
// 5 1 2 1 3
// 5 5 1 3 3
// 5 1 4 1 3
// 1 4 4 4 1