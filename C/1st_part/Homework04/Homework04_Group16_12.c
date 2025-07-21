#include <stdio.h>

int main(void)
{
    int x, y, z;
    printf("Dwse mia wra\n");
    scanf("%d:%d:%d", &x, &y, &z);
    if (x >= 0 && x <= 24 && z > 0 && z <= 59 && y > 0 && y <= 59)
    {
        if (y == 0 || z == 0)
        {
            x = (x - 24);
        }
        else if (z <= 59 && y <= 59)
        {
            x = (24 - x) - 1;
        }
        
        z = 60 - z;
        if (z > 0)
        {
            y = (60 - y) - 1;
        }
        else
        {
            y = (60 - y);
        }
        
    }
    printf("Apomenoun %d wres/a, %d lepta/o kai %d deuterolepta/o gia ta mesanuxta", x, y, z);
    return 0;
}