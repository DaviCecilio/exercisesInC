#include <stdio.h>
#include <locale.h>
#include <time.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    char firstName[30] = "nameDefault";
    char lastSurname[30] = "surnameDefault";
    char middleName[45] = "middleDefault";
    int age = 0;
    int yearBirth = 0;

        printf("\n Digite seu primeiro nome: ");
        scanf("%s",firstName);

        printf("\n Digite seu ultimo sobrenome: ");
        scanf("%s",lastSurname);

        printf("\n Digite seus nomes do meio sobrenome: ");
        scanf("%s",middleName);

        printf("\n Digite sua idade: ");
        scanf("%d",&age);

        printf("\n Seu nome completo é: \n%s %s %s", firstName, lastSurname, middleName);

        yearBirth = 2019 - age;

        printf("\n Seu ano aproximado de nascimento é: \n%d", yearBirth);
        printf("\n Endereco da variavel idade: \n%x",&age);


    return 0;
}
