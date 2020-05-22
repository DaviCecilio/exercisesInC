#include <stdio.h>
#include <stdlib.h>

int main() {

  int numberSelect = 0;
  int i = 0;


  printf("\n Digite quantos números quer sortear: ");
  scanf("%d", &numberSelect );

  int numero[numberSelect];

  printf("\n\n Os números sorteados foram: \n\n");
  for (i = 0; i < numberSelect ; i++)
  {
    numero[i] = (rand() % 100);
    printf("%d ", numero[i]);
  }

  printf("\n\n Ordem inversa dos numeros: \n\n");

  for (i = --numberSelect; i >= 0; --i)
  {
    printf("%d ", numero[i]);
  }

  printf("\n\n");

return 0;

}
