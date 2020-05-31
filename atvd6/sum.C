#include<stdio.h>
#include<locale.h>

int Somar(int valor){
    if(valor != 0){
        return valor + Somar(valor-1);
    }

    else{
        return valor;
    }
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n, resultado;

    printf("\n Digite um número inteiro: ");
    scanf("%d",&n);
    resultado = Somar(n);

    printf("\n Resultado da soma = %d",resultado);
    getchar();
}
