#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int thelw_na_brw_ton_arithmo(double x[5][5], double b);

int main(void)
{
    int i, k, p;
    char *ptr = NULL;
    double x[5][5], b;
    srand(time(NULL));
    for (i = 0; i < 5; i++)
    {
        for (k = 0; k < 5; k++)
        {
            x[i][k] = rand() % 6 + 1;
            printf("%lf\t", x[i][k]);
        }
        printf("\n");
    }
    printf("Dwse enan arithmo gia na elegxw an uparxei ston pinaka kai kai se poia grammh uparxei: ");
    scanf("%lf", &b);
    p = thelw_na_brw_ton_arithmo(x, b);
    if (p == -1)
        printf("\neinai = %s \n", ptr);
    else 
        printf("To stoixeio %f uparxei tis perissoteres fores sthn grammh %d.\n", b, p + 1);
    return 0;
}

int thelw_na_brw_ton_arithmo(double x[5][5], double b)
{
    int i, k, sum, y = 0, *p1, ii;
    for (i = 0; i < 5; i++)
    {
        sum = 0;
        for (k = 0; k < 5; k++)
        {
            if (x[i][k] == b)
                sum++;
        }
        if (sum > y)
        {
            ii = i;
            y = sum;
        }
    }
    if (y > 0)
        return ii;
    else if (y == 0)
        return -1;
}