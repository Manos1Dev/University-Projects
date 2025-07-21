#include <stdio.h>

int main(void) {
    printf("Dwse thn hlikia tou patera kai tou giou tou\n");
    int pateras, gios;
    scanf("%d%d", &pateras, &gios);
    int x1 =  (pateras - (gios *2));
    pateras = pateras + x1;
    gios = gios + x1;
    printf("Se %d xrono/xronia o pateras tha exei diplasia hlikia, dhladh o pateras tha einai %d kai o gios %d xronwn\n", x1, pateras, gios);
    return 0;
}