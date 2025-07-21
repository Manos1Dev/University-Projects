#include <stdio.h>

int main(void) {
    int x, y, z;
    printf("Dwse enan arithmo tou oktadikou systhmatos\n");
    scanf("%o", &x);
    printf("Dwse enan arithmo tou dekaeksadikou systhmatos\n");
    scanf("%x", &y);
    printf("Dwse enan arithmo tou dekadikou systhmatos\n");
    scanf("%d", &z);
    int s = x + y + z;
    printf("To athroisma sto dekadiko systhma einai %d", s);
    return 0;
}