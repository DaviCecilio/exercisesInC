#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	int lin,col, i, j;

	printf("Digite o numero de linhas que devera ter a matriz: ");
	scanf("%d",&lin);

	printf("Digite o numero de colunas que devera ter a matriz: ");
	scanf("%d",&col);

	int matriz1[lin][col], matriz2[lin][col], matriz3[lin][col];

	for (i=0; i<lin; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("\nDigite um valor para a PRIMEIRA MATRIZ [%d][%d]:",i+1,j+1);
			scanf("%d",&matriz1[i][j]);
		}
	}

	for (i=0; i<lin; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("\nDigite um valor para a SEGUNDA MATRIZ [%d][%d]:",i+1,j+1);
			scanf("%d",&matriz2[i][j]);
		}
	}

	for (i=0; i<lin; i++)
	{
		for(j=0; j<col; j++)
		{
			matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
		}
	}

	printf("\n\n A PRIMEIRA MATRIZ DIGITADA FOI\n\n");
	for (i=0; i<lin; i++)
	{
		for(j=0; j<col;j++)
			printf("%3.d\t",matriz1[i][j]);
		printf("\n\n");
	}

	printf("\n\n A SEGUNDA MATRIZ DIGITADA FOI\n\n");
	for (i=0; i<lin; i++)
	{
		for(j=0; j<col;j++)
			printf("%3.d\t",matriz2[i][j]);
		printf("\n\n");
	}

	printf("\n\n SOMA DAS MATRIZES: \n\n");
	for (i=0; i<lin; i++)
	{
		for(j=0; j<col;j++)
			printf("%3.d\t",matriz3[i][j]);
		printf("\n\n");
	}

	printf("\n\n\n");
	return 0;
}
