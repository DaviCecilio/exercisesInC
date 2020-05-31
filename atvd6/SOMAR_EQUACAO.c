#include<stdio.h>
#include<locale.h>
#include<math.h>

    int Somar(int n){
        int resultado = 0;
        if(n < 0){
            return resultado;
        } else {
        resultado = pow(n,2) + 2 * n + 3;
        return resultado + Somar(n-1);
        }
    }

    int main(){
        setlocale(LC_ALL,"Portuguese");
        int b, resultado;

        printf("\n Digite um limite para o domínio da função: ");
        scanf("%d",&b);
        resultado = Somar(b);
        printf("\n Resultado da soma = %d",resultado);
        getchar();
    }
