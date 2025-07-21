#include <stdio.h>

void mikroterh_megaluterh_timh(int x[3][4], int grammh, int sthlh, int sum);

int main(void)
{
    int i, k, x[3][4], sthlh, grammh;
    for (i = 0; i < 3; i++)
    {
        for (k = 0; k < 4; k++)
        {
            printf("Dwse enan akeraio, %dh grammh kai %dh sthlh: ", i, k);
            scanf("%d", &x[i][k]);
        }   
    }
    printf("Dwse ton arithmo apo mia grammh kai apo mia sthlh: ");
    scanf("%d", &grammh);
    mikroterh_megaluterh_timh(x, grammh, 0, 1);
    printf("Dwse mia sthlh apo ton pinaka: ");
    scanf("%d", &sthlh);
    mikroterh_megaluterh_timh(x, 0, sthlh, 2);
    return 0;
}

void mikroterh_megaluterh_timh(int x[3][4], int grammh, int sthlh, int sum)
{
    int i, k, y;
    switch (sum)
    {
        case 1:
            for (k = 0; k < 3; k++)
            {
                if (k == 0 && x[grammh][k] < x[grammh][k + 1])
                    y = x[grammh][k];
                else if (k != 0 && y > x[grammh][k + 1])
                    y = x[grammh][k];
                else if (k == 2 && y > x[grammh][k + 1])
                    y = x[grammh][k + 1];
            }
            printf("H mikroterh timh einai %d\n", y);
        break;
        case 2:
            for (i = 0; i < 2; i++)
            {
                if (i == 0 && x[i][sthlh] > x[i + 1][sthlh])
                    y = x[i][sthlh];
                else if (i == 1 && y < x[i + 1][sthlh])
                    y = x[i + 1][sthlh];
            }
            printf("H megaluterh timh einai %d\n", y);
        break;
    }
}