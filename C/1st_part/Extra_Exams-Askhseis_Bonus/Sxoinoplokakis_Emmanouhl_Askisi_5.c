#include <stdio.h>

int main(void)
{
    int s1 = 4, s2 = 1, i = 1;
    do 
    {
        s1 += 6;
        s2 += 7;
        i++;
    } while ((s1 + 100) > s2);
    printf("Mphke %d fores |%d, %d| \n", i, s1, s2);
    return 0;
}