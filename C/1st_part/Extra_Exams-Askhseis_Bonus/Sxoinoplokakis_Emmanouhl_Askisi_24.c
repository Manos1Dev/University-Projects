#include <stdio.h>

float pinakas(float x[5]);

int main(void)
{
    int i;
    float x[5], k;
    for (i = 0; i < 5; i++)
    {
        printf("Dwse 5 dekadikous arithmous: ");
        scanf("%f", &x[i]);
    }
    k = pinakas(x);
    printf("To teleutaio stoixeio einai %f\n", k);
    return 0;
}

float pinakas(float x[5])
{
    float *p;
    return *p = x[4];
}