#include <stdio.h>
#include <stdlib.h>

    int main() {

        int prim_num;
        int seg_num;
        int resto;

        printf("Entre com o primeiro numero\n ");
        scanf("%d", &prim_num);
        printf("\nEntre com o segundo numero\n ");
        scanf("%d", &seg_num);

        do {
            resto = seg_num % prim_num;
            printf("Segundo Numero = %d; Primeiro numero = %d; ", seg_num, prim_num);
            printf("resto = %d\n", resto);
            seg_num = prim_num;
            prim_num = resto;
        } while (prim_num > 0);

        printf("MDC: %d", seg_num);

        return 0;
            return 0;
    }
