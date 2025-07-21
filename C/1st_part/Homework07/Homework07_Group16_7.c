#include <stdio.h>

int main(void)
{
    float *ptr1, *ptr2, a, b, ginomeno = 0, phliko = 0;
    ptr1 = &a;
    ptr2 = &b;
    // printf("Dwse duo pragmatikous arithmous: "); 
    scanf("%f%f", ptr1, ptr2);
    if (*ptr1 > 0 && *ptr2 > 0)
    {
        phliko = ((*ptr1) / (*ptr2));
        printf("To phliko einai %.3f", phliko);
    }
    else
    {
        ginomeno = ((*ptr1) * (*ptr2));
        printf("To ginomeno einai %.3f", ginomeno);
    }
    return 0;
}