#include <stdio.h>

int main(void)
{
    int x1[100], i, k, pinakas[100];
    for (i = 0; i < 10; i++)
    {
        printf("Dwse enan arithmo, %dos einai: ", i + 1);
        scanf("%d", &x1[i]);
    }
    for (i = 0; i < 100; i++)
        pinakas[i] = 0;
    for (i = 0; i < 1; i++)
    {
        for (k = 0; k < 100; k++)
        {
            if (x1[k] == 1)
                pinakas[0] += 1;
            if (x1[k] == 2)
                pinakas[1] += 1;
            if (x1[k] == 3)
                pinakas[2] += 1;
            if (x1[k] == 4)
                pinakas[3] += 1;
            if (x1[k] == 5)
                pinakas[4] += 1;
            if (x1[k] == 6)
                pinakas[5] += 1;
            if (x1[k] == 7)
                pinakas[6] += 1;
            if (x1[k] == 8)
                pinakas[7] += 1;
            if (x1[k] == 9)
                pinakas[8] += 1;
            if (x1[k] == 10)
                pinakas[9] += 1;
        }
    }
    for (i = 0; i < 10; i++)
        printf("\n%d mathites phran bathmo = %d\n", pinakas[i], i + 1);
    return 0;
}