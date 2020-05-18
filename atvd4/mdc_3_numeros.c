#include <stdio.h>
#include <stdlib.h>

    int main() {

        int first_num = 0, sec_num = 0, third_num = 0, rest = 0;

        printf("Entre com o primeiro numero: ");
        scanf("%d", &first_num);
        printf("\nEntre com o segundo numero: ");
        scanf("%d", &sec_num);
        printf("\nEntre com o terceiro numero: ");
        scanf("%d", &third_num);

        printf("\n\n ---------- MDC - PART 1 ----------");

        do {
            rest = sec_num % first_num;
            printf("\nSegundo Numero = %d; Primeiro numero = %d; ", sec_num,first_num);
            printf("\nresto = %d\n", rest);
            sec_num = first_num;
            first_num = rest;
        } while (first_num > 0);

        printf("\n\n ---------- MDC - PART 2 ----------");

        do{
            rest = third_num % sec_num;
            printf("\nTerceiro Numero = %d; MDC ANTERIOR = %d; ",third_num, sec_num);
            printf("\nresto = %d\n", rest);
            third_num = sec_num;
            sec_num = rest;
        } while ( sec_num > 0);

        printf("\n\n\n ---------- MDC - FINISH ----------");

        printf("\n\n MDC: %d\n\n",third_num);

        return 0;

    }
