    #include <stdio.h>

    main() {
        int final, y, inicial;

        printf("T A B U A D A \n\n");
        printf("Digite o valor INICIAL: ");
        scanf("%d", &inicial);
        printf("Digite o valor FINAL: ");
        scanf("%d", &final);
        printf("\n");

        while(inicial <= final)
        {
            printf("\nTABUADA DO %d\n\n", inicial);
            y = 1;

            while(y <= 10)
            {
            printf("%d x %d = %d\n", inicial, y, inicial*y);
            y = y + 1;
            }

        inicial = inicial + 1;
        }

        printf("\n");
        return 0;
    }
