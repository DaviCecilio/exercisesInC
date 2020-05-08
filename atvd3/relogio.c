#include <stdio.h>
#include <stdlib.h>

int main( ) {
    int h1, min1, h2, min2, h, min;


    printf("\nDigite o instante inicial (horas e minutos): ");
    scanf("%d %d", &h1, &min1);

    printf("\nDigite o instante final (horas e minutos): ");
    scanf("%d %d", &h2, &min2);

    h = h2 - h1;
    min = min2 - min1;

        if ((h < 0) || ((h == 0) && (min < 0))) printf("\nDados invalidos! O segundo instante e anterior ao primeiro\n");

        else {

            if (min < 0) {

            h = h - 1;
            min = min + 60;
            }

        printf( "\nEntre os periodos %dh %dmin e %dh %dmin passaram-se %dh %dmin", h1, min1, h2, min2, h, min);
        }

    return 0;
}
