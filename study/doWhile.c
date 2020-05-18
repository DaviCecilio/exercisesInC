#include <stdio.h>

main(){
    float m1, m2, result;
    int resp;
    m1 = 0;
    m2 = 0;
    result = 0;

    do
    {
    printf("CALCULO DE METROS QUADRADOS");

    printf("\n \n Digite a primeira metragem do terreno: ");
    scanf("%f", &m1);

    printf("\n \n Digite a segunda metragem do terreno: ");
    scanf("%f", &m2);

    result = (m1 * m2);

    printf("O terreno tem: %f M2 \n", result);
    printf("Digite 1 para continuar ou 2 para sair \n");
    scanf("%d", &resp);

    } while(resp==1);
    return 0;
}
