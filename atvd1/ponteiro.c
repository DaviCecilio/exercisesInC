#include <stdio.h>

main(){

    float peso = 52.5;
    float *pPeso = &peso;

    int idade[3] = {10,20,30};
    int *pIdade = &idade[0];

    printf("\n Endereco da variavel peso: %x",&peso);
    printf("\n Conteudo da variavel peso: %f",peso);
    printf("\n Conteudo do ponteiro pPeso: %x",pPeso);
    printf("\n Conteudo da variavel peso feita atraes do ponteiro: %f",*pPeso);
    printf("\n Endereco do ponteiro pPeso: %p",&pPeso);
    printf("\n\n\n Endereco do vetor idade: %x",&idade);

    printf("\n Endereco do primeiro elemento do vetor idade: %x",&idade[0]);
    printf("\n Conteudo do ponteiro pIdade: %x",pIdade);
    printf("\n Conteudo da primeira posicao do vetor idade feita atraves do ponteiro: %d",*pIdade);

    printf("\n Endereco do ponteiro pIdade: %p",&pIdade);
}
