#include <stdio.h>

int main(void)
{
    int x, y, m = 1;
    printf("Tha prepei na dwsthoun mexri 100 akeraioi\n");
    scanf("%d", &x);
    y = x;
    while (m <= 100)
    {
        if (m > 1 && x >= y)
        {
            break;
        }
        else
        {
            y = x;
            m = m + 1;
        }
        scanf("%d", &x);
    }
    printf("Eishxthisan %d arithmoi", m);
    return 0;
}