#include <stdio.h> 

int main(void)
{
    int i, pl = 0;
    for (i = 100; i <= 999; i++)
    {
        if ((i % 10 == 3) || (i % 5 == 0) || (i / 100 == 4) || (i % 10 == 7))
        {
            continue;
        }
        pl++;
        // printf("%d\n", i);
    }
    printf("To plhthos einai %d", pl);
    return 0;
}