#include<stdio.h>
#include<locale.h>
#include<math.h>

int Sum(int value){
    if(value != 0){
        return value + Sum(value-1);
    }
    else{
        return value;
    }
}

double fat(double n)
{
  double vfat;
  if ( n <= 1 )
    return (1);
  else
  {
    //Chamada recursiva
    vfat = n * fat(n - 1);
    return (vfat);
  }
}

	int main(){
		setlocale(LC_ALL, "Portuguese");

		int b = 0,
        a = 0,
        fat1 = 0,
        fat2 = 0,
        result1 = 0,
        result2 = 0;

		printf("\n\nDigite o primeiro número: ");
		scanf("%d", &a);

		  result1 = Sum(a);

    printf("\n\n -> O somatório do número é: %d", result1);

      fat1 = fat(result1);

		printf("\n -> Resultado do fatorial do número é:  %d", fat1);

    printf("\n\n  ---------------------- \n\n ");

		printf("\n\nDigite o segundo número: ");
		scanf("%d", &b);

		  result2 = Sum(b);

    printf("\n\n -> O somatório do número é: %d", result2);

      fat2 = fat(result2);

		printf("\n -> Resultado do fatorial do número é:  %d \n\n", fat2);

		getchar();
	}
