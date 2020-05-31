#include<stdio.h>
#include<locale.h>
#include<math.h>

   int Sum(int n){
        int result = 0;
        if(n < 0){
            return result;
        } else {
        result = pow(n,2) + 2 * n + 3;
        return result + Sum(n-1);
        }
    }

    double fat(double n)
    {
        double vfat;

        if ( n <= 1 )
            return (1);
        else
            {
            vfat = n * fat(n - 1);
            return (vfat);
        }
    }

    int main(){
        setlocale(LC_ALL,"Portuguese");
        int a = 0,
        b = 0,
        fat1 = 0,
        fat2 = 0,
        result1 = 0,
        result2 = 0;

        printf("\n\n  Digite um limite para o domínio da função: ");
        scanf("%d",&a);

        result1 = Sum(a);
        printf("\n\n -> O somatório da equação é: %d", result1);

        fat1 = fat(result1);
        printf("\n -> Resultado do fatorial da equação é:  %d \n\n", fat1);

        printf("\n\n  ---------------------- \n\n ");

        printf("\n\n  Digite um limite para o domínio da função: ");
        scanf("%d",&b);

        result2 = Sum(b);
        printf("\n\n -> O somatório da equação é: %d", result2);

        fat2 = fat(result2);
        printf("\n -> Resultado do fatorial da equação é:  %d \n\n", fat2);


        getchar();
    }
