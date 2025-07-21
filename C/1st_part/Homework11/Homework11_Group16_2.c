#include <stdio.h>

void sugkrish(double x1[10], double x2[10], int a, int *p1);
// 100 + 100

int main(void)
{
    double x1[100], x2[100];
    int i, k, a, epistrofh_sunarthsh;
    for (k = 0; k < 100; k++)
    {
        printf("Dwse 100 pragmatikous arithmous gia ton prwto pinaka, %do: ", k);
        scanf("%lf", &x1[k]);
    }
    printf("\n");
    for (i = 0; i < 100; i++)
    {
        printf("Dwse 100 pragmatikous arithmous gia ton deutero pinaka, %do: ", i);
        scanf("%lf", &x2[i]);
    }
    printf("Dwse mia thesh apo tous duo pinakes pou thes na sugkrithoun: ");
    scanf("%d", &a);
    sugkrish(x1, x2, a, &epistrofh_sunarthsh);
    if (epistrofh_sunarthsh == 1)
        printf("Sthn thesh %d einai isa\n", a);
    else if (epistrofh_sunarthsh == 0)
        printf("Sthn thesh %d den einai isa\n", a);
    return 0;
}

void sugkrish(double x1[100], double x2[100], int a, int *p1)
{
    if (x1[a] == x2[a])
        *p1 = 1;
    else
        *p1 = 0;
}
