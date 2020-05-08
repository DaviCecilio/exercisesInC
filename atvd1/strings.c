#include<stdio.h>

    main(){

        char var1[20] = {'a','l','u','n','o'};
        char var2[20] = "variavel 2";
        char var3[20] = "variavel 3";


        printf("\n Digite uma palavra: ");
        scanf("%s",var1);

        printf("\n Digite duas palavras: ");
        scanf("%s",var2);

        printf("\n Digite duas palavras: ");
        fflush(stdin);
        fgets(var3,20,stdin);

        printf("\n Valores digitados: ");
        printf("\n %s",var1);
        printf("\n %s",var2);
        printf("\n %s",var3);

        printf("\n Tamanho de var1 = %d",sizeof(var1));
        printf("\n Tamanho de var2 = %d",sizeof(var2));
        printf("\n Tamanho de var3 = %d",sizeof(var3));
    }
