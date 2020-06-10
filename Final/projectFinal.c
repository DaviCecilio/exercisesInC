#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void clrscr();
int menu();
int name_average();
int average_5();
int twoMonthInterest();
int clockWithSeconds();
int month();
int mdc3Numbers();
int multiplicationGame();
int xNumbers();
int inverseMatrix();
int sum2Equations();
int sumN_M();

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int menuSelected;
	clrscr();
	printf("ATIVIDADE PRÁTICA - INTEGRAÇÃO ");

	do {
        menuSelected = menu();
        switch(menuSelected) {
            case 0: break;
            case 1:
                clrscr();
                name_average();
                break;
            case 2:
                clrscr();
                average_5();
                break;
            case 3:
                clrscr();
                twoMonthInterest();
                break;
            case 4:
                clrscr();
                clockWithSeconds();
                break;
            case 5:
                clrscr();
                month();
                break;
            case 6:
                clrscr();
                mdc3Numbers();
                break;
            case 7:
                clrscr();
                multiplicationGame();
                break;
            case 8:
                clrscr();
                xNumbers();
                break;
            case 9:
                clrscr();
                inverseMatrix();
                break;
            case 10:
                clrscr();
                sum2Equations();
                break;
            case 11:
                clrscr();
                sumN_M();
                break;
            default:
                clrscr();
                printf("----- OPCAO INVALIDA -----\n\n");
                printf("----- TENTE NOVAMENTE!!! -----\n\n");
        }
    }
    while (menuSelected != 0);
    return 0;

}

void clrscr()
{
    system("cls||clear");
}

int menu(){
int menuSelected = 0;

printf("\n\n ------ MENU DE OPCOES ------ \n");

    printf("1 - NOME E IDADE \n");
    printf("2 - MEDIA DE 5 \n");
    printf("3 - JUROS DE 2 MESES \n");
    printf("4 - RELOGIO_COM_SEGUNDOS \n");
    printf("5 - MESES \n");
    printf("6 - TABUADA JOGO \n");
    printf("7 - MDC 3 NUMEROS \n");
    printf("8 - X NUMEROS \n");
    printf("9 - MATRIZ INVERSA \n");
    printf("10 - INSERIR \n");
    printf("11 - SOMAR N M \n");
    printf("0 - SAIR !!! \n");

    printf("\n\n Escolha o Nº do projeto que deseja executar:  ");
    scanf("%d", &menuSelected);

    return menuSelected;
}


int name_average(){
// Faculdade Pitágoras – Afonso Pena
// Disciplina : Algoritmos e Técnicas de Programação
// Professor : Luiz Mesquita
// Descrição : Calcula o ano aproximado de nascimento do usuário e o endereço da variável utilizada
// Autor(a) : Davi Cecílio
// Data atual : <09/06/2020>

    setlocale(LC_ALL, "Portuguese");

    char firstName[30] = "nameDefault";
    char lastSurname[30] = "surnameDefault";
    char middleName[45] = "middleDefault";
    int age;
    int yearBirth = 0;

        printf("\n Digite seu primeiro nome: ");
        scanf("%s",firstName);

        printf("\n Digite seu ultimo sobrenome: ");
        scanf("%s",lastSurname);

        printf("\n Digite seus sobrenomes do meio: ");
        scanf("%s",middleName);

        printf("\n Digite sua idade: ");
        scanf("%d",&age);

        printf("\n Seu nome completo é: \n%s %s %s", firstName, middleName, lastSurname);

        yearBirth = 2019 - age;

        printf("\n Seu ano aproximado de nascimento é: \n%d", yearBirth);
        printf("\n Endereco da variavel idade: %p",&age);


    return 0;

}

int average_5(){
// Faculdade Pitágoras – Afonso Pena
// Disciplina : Algoritmos e Técnicas de Programação
// Professor : Luiz Mesquita
// Descrição : Calcula a média, varianca e desvio padrao por meio da entrada de 5 notas
// Autor(a) : Davi Cecílio
// Data atual : <09/06/2020>

    float notas[5] = {0};
    float media = 0;
    float variancia = 0;
    float desvPadrao = 0;

            printf("\n Digite as cinco notas do aluno: ");
            scanf("%f %f %f %f %f",&notas[0],&notas[1],&notas[2],&notas[3],&notas[4]);

            media = (notas[0] + notas[1] + notas[2] + notas[3] + notas[4]) / 5;

            variancia = (pow((notas[0] - media),2) + pow((notas[1] - media),2) + pow((notas[2] - media),2) + pow((notas[3] - media),2) + pow((notas[4] - media),2))/5;

            desvPadrao = sqrt(variancia);

            printf("\n\n -----------RESULTADOS-----------");

            printf("\n Media final do aluno = %f", media);
            printf("\n Variancia = %f",variancia);
            printf("\n Desvio padrao = %f \n",desvPadrao);

        return 0;
}

int twoMonthInterest(){
// Faculdade Pitágoras – Afonso Pena
// Disciplina : Algoritmos e Técnicas de Programação
// Professor : Luiz Mesquita
// Descrição : Calculo o Juros sobre o valor do produto, taxa do juros e meses digitados pelo usuário
// Autor(a) : Davi Cecílio
// Data atual : <09/06/2020>

    float amount = 0;
    float rateInterest = 0;
    int quantMonth = 0;

    float valueInterest = 0;
    float interestPaid = 0;

        printf("\n Digite o valor do produto: ");
        scanf("%f",&amount);

        printf("\n Digite a taxa de juros em porcentagem: ");
        scanf("%f",&rateInterest);

        printf("\n Digite a quantidade de meses para cobranca: ");
        scanf("%d",&quantMonth);

        rateInterest = rateInterest/100;

        valueInterest = (amount) * pow((1 + (rateInterest)), quantMonth);
        interestPaid = valueInterest * amount;

        printf("\n\n -----------RESULTADOS----------- \n\n");
        printf("\n Valor bruto = %f",amount);
        printf("\n Valor líquido = %f",interestPaid);
        printf("\n Juros pago = %f\n",valueInterest);

        return 0;
}

int clockWithSeconds(){
// Faculdade Pitágoras – Afonso Pena
// Disciplina : Algoritmos e Técnicas de Programação
// Professor : Luiz Mesquita
// Descrição : Executa a diferença entre instantes (horas, minutos e segundos) e exibe em tela
// Autor(a) : Davi Cecílio
// Data atual : <09/06/2020>

    int h1, min1, sec1, h2, min2, sec2, h, min, sec;


    printf("\nDigite o instante inicial (horas , minutos e segundos): ");
    scanf("%d %d %d", &h1, &min1, &sec1);

    printf("\nDigite o instante final (horas , minutos e segundos): ");
    scanf("%d %d %d", &h2, &min2, &sec2);

    h = h2 - h1;
    min = min2 - min1;
    sec = sec2 - sec1;

        if ((h < 0) || ((h == 0) && (min < 0)) || ((h == 0) && (sec < 0))) printf("\nDados invalidos! O segundo instante e anterior ao primeiro\n");

        else {

            if (min < 0) {

            h = h - 1;
            min = min + 60;
            }

            if (sec < 0) {

            h = h - 1;
            sec = sec + 60;
            }

        printf( "\nEntre os periodos %dh %dmin %dsec e %dh %dmin %dsec passaram-se %dh %dmin %dsec", h1, min1, sec1, h2, min2, sec2, h, min, sec);
        }

    return 0;
}

int month(){
// Faculdade Pitágoras – Afonso Pena
// Disciplina : Algoritmos e Técnicas de Programação
// Professor : Luiz Mesquita
// Descrição : Exibe o mês de acordo com o número digitado pelo usuário
// Autor(a) : Davi Cecílio
// Data atual : <09/06/2020>

    int value;
    printf ("Digite um valor de 1 a 12: ");
    scanf("%d", &value);

    switch ( value ) {
        case 1 :
        printf ("\n Janeiro\n");
        break;

        case 2 :
        printf ("\n Fevereiro\n");
        break;

        case 3 :
        printf ("\n Março\n");
        break;

        case 4 :
        printf ("\n Abril\n");
        break;

        case 5 :
        printf ("\n Maio\n");
        break;

        case 6 :
        printf ("\n Junho\n");
        break;

        case 7 :
        printf ("\n Julho\n");
        break;

        case 8 :
        printf ("\n Agosto\n");
        break;

        case 9 :
        printf ("\n Setembro\n");
        break;

        case 10 :
        printf ("\n Outubro\n");
        break;

        case 11 :
        printf ("\n Novembro\n");
        break;

        case 12 :
        printf ("\n Dezembro\n");
        break;


        default :
        printf ("Valor invalido!\n");
    }

        return 0;
}

int mdc3Numbers(){
// Faculdade Pitágoras – Afonso Pena
// Disciplina : Algoritmos e Técnicas de Programação
// Professor : Luiz Mesquita
// Descrição : Executa o calculo do MDC entre 3 números
// Autor(a) : Davi Cecílio
// Data atual : <09/06/2020>

     int first_num = 0, sec_num = 0, third_num = 0, rest = 0;

        printf("Entre com o primeiro numero: ");
        scanf("%d", &first_num);
        printf("\nEntre com o segundo numero: ");
        scanf("%d", &sec_num);
        printf("\nEntre com o terceiro numero: ");
        scanf("%d", &third_num);

        printf("\n\n ---------- MDC - PART 1 ----------");

        do {
            rest = sec_num % first_num;
            printf("\nSegundo Numero = %d; Primeiro numero = %d; ", sec_num,first_num);
            printf("\nresto = %d\n", rest);
            sec_num = first_num;
            first_num = rest;
        } while (first_num > 0);

        printf("\n\n ---------- MDC - PART 2 ----------");

        do{
            rest = third_num % sec_num;
            printf("\nTerceiro Numero = %d; MDC ANTERIOR = %d; ",third_num, sec_num);
            printf("\nresto = %d\n", rest);
            third_num = sec_num;
            sec_num = rest;
        } while ( sec_num > 0);

        printf("\n\n\n ---------- MDC - FINISH ----------");

        printf("\n\n MDC: %d\n\n",third_num);

        return 0;
}

int multiplicationGame(){
// Faculdade Pitágoras – Afonso Pena
// Disciplina : Algoritmos e Técnicas de Programação
// Professor : Luiz Mesquita
// Descrição : Exibe a tabuada do número escolhido pelo usuário para introduzir em um mini-game. Onde o resultado corresponde ao número de acertos.
// Autor(a) : Davi Cecílio
// Data atual : <09/06/2020>

    int inicial = 0, contador = 0, respostaUsuario = 0, acerto = 0, resultado = 0;


    printf("T A B U A D A \n\n");
    printf("Digite o número para acertar as multiplicações: ");
    scanf("%d", &inicial);

    // Uso do While obrigatório para a atividade

    while(contador <= 10)
    {
    printf("\nTABUADA DO %d\n\n", inicial);
    contador = 1;
    acerto = 0;

        while(contador <= 10)
        {
        printf("%d x %d =", inicial, contador);
        printf("\n Digite a resposta: ");

        scanf("%d", &respostaUsuario);

        if(inicial*contador == respostaUsuario){

        acerto = acerto + 1;

        }

        contador = contador + 1;
        }

    }

    resultado = (acerto * 100)/ 10;

    printf("\n Usuário acertou em porcentagem: %d ", resultado);

    if(resultado <= 25){
    printf("\n\n Resultado do teste foi: MUITO RUIM");
    }else if(resultado <= 50){
    printf("\n\n Resultado do teste foi: RUIM");
    }else if(resultado <= 75){
    printf("\n\n Resultado do teste foi: BOM");
    }else if (resultado >= 75){
    printf("\n\n Resultado do teste foi: MUITO BOM");
    }

    return 0;
}

int xNumbers(){
// Faculdade Pitágoras – Afonso Pena
// Disciplina : Algoritmos e Técnicas de Programação
// Professor : Luiz Mesquita
// Descrição : Sortear a quantidade de números pre-definida pelo usuário, e exibe o seu inverso
// Autor(a) : Davi Cecílio
// Data atual : <09/06/2020>

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

int inverseMatrix(){
// Faculdade Pitágoras – Afonso Pena
// Disciplina : Algoritmos e Técnicas de Programação
// Professor : Luiz Mesquita
// Descrição : Cria uma matriz de acordo com os dados informados pelo usuário e a exibe da forma normal e inversa
// Autor(a) : Davi Cecílio
// Data atual : <09/06/2020>

    int lin,col, i, j;

	printf("Digite o numero de linhas que devera ter a matriz: ");
	scanf("%d",&lin);

	printf("Digite o numero de colunas que devera ter a matriz: ");
	scanf("%d",&col);

	int matriz1[lin][col], matriz2[lin][col];

	for (i=0; i<lin; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("\nDigite um valor para a MATRIZ [%d][%d]:",i+1,j+1);
			scanf("%d",&matriz1[i][j]);
		}
	}

	printf("\n\n A Matriz digitada foi:\n\n");
	for (i=0; i<lin; i++)
	{
		for(j=0; j<col;j++)
			printf("%3.d\t",matriz1[i][j]);
		printf("\n\n");
	}

	printf("\n\n A Matriz Inversa:\n\n");
	for (i=lin-1; i>=0; i--)
	{
		for(j=col-1; j>=0; j--)
			printf("%3.d\t",matriz1[i][j]);
		printf("\n\n");
	}

	return 0;
}

int sum2Equations(){
// Faculdade Pitágoras – Afonso Pena
// Disciplina : Algoritmos e Técnicas de Programação
// Professor : Luiz Mesquita
// Descrição : Realiza o somátorio de cada função do segundo grau definida pelo usuário por meio de sua limitação.
// Autor(a) : Davi Cecílio
// Data atual : <09/06/2020>

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

        return 0;

}

int sumN_M(){
// Faculdade Pitágoras – Afonso Pena
// Disciplina : Algoritmos e Técnicas de Programação
// Professor : Luiz Mesquita
// Descrição : Calcula a média, varianca e desvio padrao por meio da entrada de 5 notas
// Autor(a) : Davi Cecílio
// Data atual : <09/06/2020>

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



