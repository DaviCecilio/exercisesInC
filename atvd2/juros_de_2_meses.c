#include <stdio.h>
#include <math.h>

int main(){
    float amount = 0;
    float rateInterest = 0;
    int quantMonth = 0;

    float valueInterest = 0;
    float interestPaid = 0;

        printf("\n Digite o valor do produto: ");
        scanf("%f",&amount);

        printf("\n Digite a taxa de juros em porcentagem: ");
        scanf("%f",&rateInterest);

        printf("\n Digite a quantidade de meses para cobranca: ");
        scanf("%d",&quantMonth);

        rateInterest = rateInterest/100;

        valueInterest = (amount) * pow((1 + (rateInterest)), quantMonth);
        interestPaid = valueInterest * amount;

        printf("\n\n -----------RESULTADOS----------- \n\n");
        printf("\n Valor bruto = %f",amount);
        printf("\n Valor líquido = %f",interestPaid);
        printf("\n Juros pago = %f\n",valueInterest);

        return 0;
}
