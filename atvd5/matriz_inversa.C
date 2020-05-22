#include <stdio.h>
#include <stdlib.h>

int main() {

	int lin = 0,col = 0, l = 0, c = 0;

	printf("Digite o numero de linhas que devera ter a matriz: ");
	scanf("%d",&lin);

	printf("Digite o numero de colunas que devera ter a matriz: ");
	scanf("%d",&col);

   int matriz [lin][col];

   // gerando a matriz

   for (l=0; l<lin; l++) {

      for (c=0; c<col; c++) {

			printf("\nDigite um valor para a MATRIZ [%d][%d]:",l+1,c+1);
			scanf("%d",&matriz[l][c]);

      }

   }
	printf("\n\n A MATRIZ DIGITADA FOI\n\n");
	for (l=0; l<lin; l++)
	{
		for(c=0; c<col;c++)
		{
			printf("%3.d\t",matriz[l][c]);
        }
		printf("\n\n");
	}

   // imprimindo a matriz


  printf("\n\n A MATRIZ 123 E: \n");
   for (l=--lin; l>=0; l--)
   {
        for (c=--col; c>=0; c--)
        {
            printf("%3.d\t",matriz[l][c]);
        }
    printf("\n");
   }

   return 0;

}
