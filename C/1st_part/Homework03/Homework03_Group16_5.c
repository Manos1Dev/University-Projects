#include <stdio.h>
#define a 255 
#define b 0

int main(void) {
    printf("Dwse mia IP (to prwto byte (x) anhkei sto diasthma timwn [192,223] kai ta upolloipa byte (y, z, w) anhkoun sto diasthma timwn [0,255] \n");
    int x, y, z, w;
    scanf("%d.%d.%d.%d", &x, &y, &z, &w);
    printf("H IP anoikei sto diktuo %d.", ((x >=0 && x <= 255) * (((a - 31) - x) <= 32) && (((a - 32) - x) >= 0)) * x); // elegxw an einai sto [192,223]
    printf("%d.", ((x >=0 && x <= 255) * (y & a)));
    printf("%d.", ((x >=0 && x <= 255) * (z & a)));
    printf("%d", ((x >=0 && x <= 255) * (w & b)));
    return 0;
}