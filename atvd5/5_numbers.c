#include <stdio.h>
#include <stdlib.h>

int main() {

    int numero[5];
    int i = 0;
        for (i = 0; i < 5; i++)
        {
            printf("\n Digite um numero: ");
            scanf("%d", &numero[i] );
        }
            printf("\n Ordem inversa dos numeros: ");

        for (i = 5; i > 0; i--) {
            printf("%d ", numero[i]);
        }
    return 0;
}
