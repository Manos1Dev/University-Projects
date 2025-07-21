#include <stdio.h>
#define size1 5
#define size2 7

int main(void)
{
    int i, k, *ptr, x[size1][size2];
    for (i = 0; i < size1; i++)
        for (k = 0; k < size2; k++)
        {
            ptr = &*(*(x + i) + k); 
            printf("Dwse enan akeraio, %dh sthlh kai %dh grammh: ", k + 1, i + 1);
            scanf("%d", ptr);
            // p = &ptr;
        }
    for (i = 0; i < size1; i++)
    {
        for (k = 0; k < size2; k++)
        {
            ptr = &*(*(x + i) + k); 
            printf("%d\t", *ptr);
        }
        printf("\n");
    }
    return 0;
}