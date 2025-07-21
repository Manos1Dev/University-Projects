#include <stdio.h>

int main(void)
{
    int *p, arr[] = {10, 20, 30, 40};
    p = arr + 3;
    for (*p; *p >= 10; *p -= 10)
        printf("%d\n", *p);
    return 0;
}