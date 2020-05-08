#include<stdio.h>
#include<math.h>

    int main(){
        float notas[4] = {0};
        float media = 0;
        float variancia = 0;
        float desvPadrao = 0;

            printf("\n Digite as quatro notas do aluno: ");
            scanf("%f %f %f %f",&notas[0],&notas[1],&notas[2],&notas[3]);

            media = (notas[0] + notas[1] + notas[2] + notas[3]) / 4;

            variancia = (pow((notas[0] - media),2) + pow((notas[1] - media),2) + pow((notas[2] - media),2) + pow((notas[3] - media),2))/4;

            desvPadrao = sqrt(variancia);

            printf("\n\n -----------RESULTADOS-----------");

            printf("\n Media final do aluno = %f",media);
            printf("\n Variancia = %f",variancia);
            printf("\n Desvio padrao = %f",desvPadrao);

        return 0;
}
