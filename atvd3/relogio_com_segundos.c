#include <stdio.h>
#include <stdlib.h>

int main( ) {
    int h1, min1, sec1, h2, min2, sec2, h, min, sec;


    printf("\nDigite o instante inicial (horas , minutos e segundos): ");
    scanf("%d %d %d", &h1, &min1, &sec1);

    printf("\nDigite o instante final (horas , minutos e segundos): ");
    scanf("%d %d %d", &h2, &min2, &sec2);

    h = h2 - h1;
    min = min2 - min1;
    sec = sec2 - sec1;

        if ((h < 0) || ((h == 0) && (min < 0)) || ((h == 0) && (sec < 0))) printf("\nDados invalidos! O segundo instante e anterior ao primeiro\n");

        else {

            if (min < 0) {

            h = h - 1;
            min = min + 60;
            }

            if (sec < 0) {

            h = h - 1;
            sec = sec + 60;
            }

        printf( "\nEntre os periodos %dh %dmin %dsec e %dh %dmin %dsec passaram-se %dh %dmin %dsec", h1, min1, sec1, h2, min2, sec2, h, min, sec);
        }

    return 0;
}
