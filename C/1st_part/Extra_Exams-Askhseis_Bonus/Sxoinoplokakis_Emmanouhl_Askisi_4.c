#include <stdio.h>

int main(void)
{
    int x, y, z, epilogh, i;
    printf("Dwse treis akeraious: ");
    scanf("%d%d%d", &x, &y, &z);
    printf("EPELEKSE \n1. Oi akeraioi na einai diaforetikoi\n2. Duo akeraioi na einai isoi\n3. Poioi anoikoun sto [-3, 3]\n");
    scanf("%d", &epilogh);
    switch (epilogh)
    {
        case 1:
            if (x != y || x != z)
                printf("\nEinai diaforetikoi\n");
            else 
                printf("\nDen einai diaforetikoi\n");
            break;
        case 2:
            if (x == y || x == z)
                printf("Ypraxoun 2 h 3 akeraioi pou na einai isoi\n");
            else
                printf("Den upraxoun 2 h 3 akeraioi pou na einai isoi\n");
            break;
        case 3:
            if ((x <= 3 && x >= -3))
                printf("O 1os anhkei sto [-3, 3]\n");
            if ((y <= 3 && y >= -3))
                printf("O 2os anhkei sto [-3, 3]\n");
            if ((z <= 3 && z >= -3))
                printf("O 3os anhkei sto [-3, 3]\n");
            break;
    }
    return 0;
}
