#include<stdio.h>

main(){
    float valor_bruto = 0;
    float taxa_juros = 0;
    float valor_juros = 0;
    float juros_pago = 0;

        printf("\n Digite o valor do produto:");
        scanf("%f",&valor_bruto);

        printf("\n Digite a taxa de juros em porcentagem: ");
        scanf("%f",&taxa_juros);

        taxa_juros = taxa_juros/100;
        valor_juros = valor_bruto * (1 + taxa_juros);
        juros_pago = taxa_juros * valor_bruto;

        printf("\n\n -----------RESULTADOS-----------");
        printf("\n Valor bruto = %f",valor_bruto);
        printf("\n Valor com juros = %f",valor_juros);
        printf("\n Juros pago = %f",juros_pago);
}
