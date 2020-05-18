#include <stdio.h>

int main(){
    int inicial = 0, contador = 0, respostaUsuario = 0, acerto = 0, resultado = 0;


    printf("T A B U A D A \n\n");
    printf("Digite o número para acertar as multiplicações: ");
    scanf("%d", &inicial);

    // Uso do While obrigatório para a atividade

    while(contador <= 10)
    {
    printf("\nTABUADA DO %d\n\n", inicial);
    contador = 1;
    acerto = 0;

        while(contador <= 10)
        {
        printf("%d x %d =", inicial, contador);
        printf("\n Digite a resposta: ");

        scanf("%d", &respostaUsuario);

        if(inicial*contador == respostaUsuario){

        acerto = acerto + 1;

        }

        contador = contador + 1;
        }

    }

    resultado = (acerto * 100)/ 10;

    printf("\n Usuário acertou em porcentagem: %d ", resultado);

    if(resultado <= 25){
    printf("\n\n Resultado do teste foi: MUITO RUIM");
    }else if(resultado <= 50){
    printf("\n\n Resultado do teste foi: RUIM");
    }else if(resultado <= 75){
    printf("\n\n Resultado do teste foi: BOM");
    }else if (resultado >= 75){
    printf("\n\n Resultado do teste foi: MUITO BOM");
    }

    return 0;
    }
