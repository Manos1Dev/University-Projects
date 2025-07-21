#include <stdio.h>
#define mera1 30
#define mera2 31

int main(void)
{
    int x, y, z;
    printf("Dwse enan mhna\n");
    scanf("%d", &x);
    if (x == 2 || x == 1 || x == 12) 
    {
        printf("Dwse mia mera\n");
        scanf("%d", &y);
        printf("Tha prepei na dwseis an o febrouarios exei 28 h 29 meres ekeinh thn xronia\n");
        scanf("%d", &z);
        if (x == 2 && y > z)
        {
            printf("H mera pou edwses einai megaluterh apo tis meres pou exei o febrouarios");
            return 0;
        }
    }
    else 
    {
        printf("Dwse mia mera\n");
        scanf("%d", &y);
    }
    if ((x == 4 || x == 6 || x == 9 || x == 10) && (y >= 1 && y <= 30)) 
    {
        y = (50 - (mera1 - y));
        x = x + 1;
        if (y > mera2) 
        {
            if (x == 5 || x == 7)
            {
                y = (y - mera2);
                x = x + 1;
            }
        }  
        else if (y > mera1) 
        {
            if ((x == 4 || x == 6 || x == 9 || x == 10)) {
                y = (y - mera1);
                x = x + 1;
            }
        }
        if (x == 2)
        {
            printf("%d/%d", z, y);
        }
        printf("%d/%d", x, y);
    } 
    else if (x == 2)
    {
        z = (50 - (z - y));
        x = x + 1;
        if (z > mera2) 
        {
            z = (z - mera2);
            x = x + 1;
        }
        printf("%d/%d", x, z);
    }
    else if ((x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 11 || x == 12) && (y >= 1 && y <= 31))
    {
        y = (50 - (mera2 - y));
        x = x + 1;
        if ((y > mera1) && ((x == 12) || (x == 1) || (x == 2))) 
        {
            if (x == 2)
            {
                if (y > z)
                {
                    y = y - z;
                    x = x + 1;
                }
                else
                {
                    y = y - z;
                    x = x + 1; 
                }
            }
            else if (x == 4 || x == 6 || x == 9 || x == 10)
            {
                y = y - mera1;
                x = x + 1;
            }
            else if (x == 1)
            {
                y = y - mera2;
                x = x + 1;
            }
        }
        else if ((y > mera2) || (x == 2 && y >= z)) 
        {
            x = x + 1;
            if (x == 13)
            {
                x = 1;
            }
            else if (x == 14)
            {
                x = 2;
            }
            if (x == 2)
            {
                y = y - z;
            }
            else if ((x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 11 || x == 12))
            {
                y = y - mera2;
            }
            else 
            {
                y = y - mera1;
            }
        }
        printf("%d/%d", x, y);
    }
    return 0;
}