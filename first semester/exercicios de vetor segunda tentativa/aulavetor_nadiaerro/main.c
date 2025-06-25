#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define ex10
#define funcoes

#ifdef funcoes
int menu() {
    int iniciar;
    do {
        printf("Deseja iniciar o programa?\n0-N�o\n1-Sim\n");
        scanf("%d", &iniciar);
        if (iniciar != 1 && iniciar != 0) {
            printf("Insira apenas os n�meros 0 ou 1.\n\n");
        }
    } while (iniciar != 1 && iniciar != 0);

    return (iniciar);
}

#endif // funcoes

#ifdef ex1
int main()
{
    /* 1.Armazene sete n�meros reais no vetor chamado vet.
     Ap�s a alimenta��o de todos os n�meros no vetor vet,
     mostre todos os elementos armazenados no vetor.
     Exiba o produto de todos os numeros armazenados no vetor*/
    setlocale(LC_ALL, "");
    int start;
    start = menu();
    if (start == 1) {
        float vet[6];
        float prod = 1;
        for (int i = 0; i <= 6; i++) {
            printf("Digite um valor: \n");
            scanf("%f", &vet[i]);
            prod = prod * vet[i];
        }
        system("cls");
        for (int i = 0; i <= 6; i++) {
            printf("\nN�mero armazenado na posi��o %d � %.1f", i, vet[i]);
            }
        printf("\nO produto dos n�meros armazenados � %.1f", prod);
        }
        printf("\n");
    return 0;
}
#endif // ex1

#ifdef ex2
int main()
{
    /* Receba seis n�meros quaiquer. Exiba a m�dia desses n�meros.*/
    setlocale(LC_ALL, "");
    int start;
    start = menu();
    if (start == 1) {
        float a[5];
        float soma = 0;
        float media;
        for (int i = 0; i <= 5; i++) {
            printf("Digite um valor qualquer: \n");
            scanf("%f", &a[i]);
            soma = soma + a[i];
        }
        media = soma / 6;
        printf("A m�dia dos n�meros inseridos � %.2f", media);
    }
    return 0;
}
#endif // ex2

#ifdef ex3
int main()
{
    /*Receba sete n�meros positivos. Exiba a soma desses n�meros*/
    setlocale(LC_ALL, "");
    int start;
    start = menu();
    if (start == 1) {
        float a[6];
        float soma = 0;
        for (int i = 0; i <= 6; i++) {
            do {
                printf("Digite um valor positivo: \n");
                scanf("%f", &a[i]);
                if (a[i] < 0) {
                    printf("Digite apenas valores positivos! \n\n");
                }
            } while (a[i] < 0);
            soma = soma + a[i];
        }

        printf("A soma dos n�meros informados �: %.2f", soma);
    }
    return 0;
}
#endif // ex3

#ifdef ex4
int main()
{
    /* Leia quinze elementos de um vetor. Ap�s a alimenta��o mostre todos os elementos armazenados no vetor*/
    setlocale(LC_ALL, "");
    int start;
    start = menu();
    if (start == 1) {
        int i;
        float a[14];
        for (i = 0; i <= 14; i++) {
            printf("Digite um valor: \n");
            scanf("%f", &a[i]);
        }
        for (i = 0; i <= 14; i++) {
            printf("\n%.1f", a[i]);
        }
    }
    return 0;
}
#endif // ex4

#ifdef ex5
int main()
{
    /* Receba doze n�meros positivos e armazene no vetor A. Ap�s a alimenta��o de todos os n�meros mostre apenas os n�meros maiores que 121 que est�o armazenados no vetor.*/
    setlocale(LC_ALL, "");
    int start;
    start = menu();
    if (start == 1) {
        int i;
        float a[11];
        for (i = 0; i <= 11; i++) {
            do {
                printf("Digite um n�mero positivo: \n");
                scanf("%f", &a[i]);
                if (a < 0) {
                    printf("Digite apenas n�meros positivos! \n\n");
                }
            } while (a < 0);
        }
        for (i = 0; i <= 11; i++) {
            if (a[i] >= 121) {
                printf("\n%.1f", a[i]);
            }
        }
    }
    return 0;
}
#endif // ex5

#ifdef ex6
int main()
{
    /* Leia oito elementos e armazene-os no vetor A. Construa o vetor B de mesma dimens�o com os elementos do vetor A multiplicados por 3. Apresente o conte�do dos dois vetores.*/
    setlocale(LC_ALL, "");
    int start;
    start = menu();
    if (start == 1) {
        float a[7], b[7];
        for (int i = 0; i <= 7; i++) {
            printf("Digite um valor: \n");
            scanf("%f", &a[i]);
            b[i] = a[i] * 3;
        }
        for (int i = 0; i <= 7; i++) {
            printf("Posi��o %d - A:%.1f; B:%.1f\n", i, a[i], b[i]);
        }
    }
    return 0;
}
#endif // ex6

#ifdef ex7
int main()
{
    /* Fa�a um programa que armazene num vetor 6 n�meros negativos. Calcule a soma dos seus quadrados; se a soma for inferior a 1000 solicite novos dados. Mostre somente a soma que satisfaz a condi��o.*/
    setlocale(LC_ALL, "");
    int start;
    start = menu();
    if (start == 1) {
        float a[5];
        float soma = 0;
        do {
            for (int i = 0; i <= 5; i++) {
                do {
                    printf("Digite um valor negativo: \n");
                    scanf("%f", &a[i]);
                    if (a[i] >= 0) {
                        printf("Digite apenas valores negativos! \n\n");
                    }
                } while (a[i] >= 0);
            soma = soma + pow(a[i], 2);
            }
            if (soma < 1000) {
                printf("Digite novos dados! \n\n");
            }
        } while (soma < 1000);
        printf("A soma dos quadrados dos n�meros informados �: %.2f", soma);
        }
    return 0;
}
#endif // ex7

#ifdef ex8
int main()
{
    /*Armazene num vetor dez n�meros positivos. Exiba o conte�do do vetor. Mostre o maior n�mero, quantas vezes ele foi digitado e em que posi��es ele apareceu dentro do vetor*/
    setlocale(LC_ALL, "");
    int start;
    start = menu();
    if (start == 1) {
        float a[9];
        float maior = 0;
        int aparicao = 0;
        for (int i = 0; i <= 9; i++) {
            do {
                printf("Digite um valor positivo: \n");
                scanf("%f", &a[i]);
                if (a[i] < 0) {
                    printf("Digite apenas vlaores positivos! \n\n");
                }
            } while (a[i] < 0);
        if (a[i] >= maior) {
            maior = a[i];
        }
        }

        for (int i = 0; i <= 9; i++) {
            if (a[i] == maior) {
                aparicao = aparicao + 1;
            }
        }

        for (int i = 0; i <= 9; i++) {
            if (a[i] == maior) {
                printf("\nPosi��o %d = %.2f (maior)", i, a[i]);
            }
            else {
                printf("\nPosi��o %d = %.2f ", i, a[i]);
            }
        }
        if (aparicao == 1) {
            printf("\nO maior n�mero � %.2f e ele apareceu %d vez!", maior, aparicao);
        }
        else {
            printf("\nO maior n�mero � %.2f e ele apareceu %d vezes!", maior, aparicao);
        }
    }
    return 0;
}
#endif // ex8

#ifdef ex9
int main()
{
    /* Leia o vetor A de uma dimens�o m�xima de 15 elementos. O usu�rio poder� digitar a quantidade desejada desde que o valor seja inferior ou igual a 15. Construir um vetor B de mesmo tipo, de modo que cada elemento do vetor B seja fatorial do elemento correspondente do vetor A. Apresentar o conte�do dos dois vetores*/
    setlocale(LC_ALL, "");
    int start;
    start = menu();
    if (start == 1) {
        int max, i, c;
        do {
            printf("Digite o valor m�ximo de elementos: \n");
            scanf("%d", &max);
            if (max < 1 || max > 15) {
                printf("Digite um valor entre 1 e 15! \n\n");
            }
        } while (max < 1 || max > 15);
        max = max - 1;
        int a[max], b[max];
        int fatorial = 1;

        for (i = 0; i <= max; i++) {
            do {
                printf("Digite um valor: \n");
                scanf("%d", &a[i]);
                if (a[i] < 0) {
                    printf("Digite apenas n�meros positivos! \n\n");
                }
            } while (a[i] < 0);
        }

        for (i = 0; i <= max; i++) {
            for (int c = 0; c < a[i]; c++) {
                fatorial *= (c + 1);
            }
        b[i] = fatorial;
        fatorial = 1;
        }

        for (i = 0; i <= max; i++) {
            printf("Elemento da posi��o %d: %d \tFatorial da posi��o %d: %d\n", i, a[i], i, b[i]);
        }
        }
    return 0;
}
#endif // ex9

#ifdef ex10
int main()
{
    /* O usu�rio poder� digitar a quantidade de n�meros que ele deseja armazenar no vetor A desde que esse valor seja superior a 4 e inferior ou igual a 20. Construa o vetor B da mesma dimens�o e com os mesmos elementos do vetor A. Observando que o primeiro elemento de A passa a ser o �ltimo de B, o segundo elemento de A passa a ser o pen�ltimo de B e a assim por diante. Exibir o conte�do dos dois vetores.*/
    setlocale(LC_ALL, "");
    int start;
    start = menu();
    if (start == 1) {
        int tamanho, i; //Vari�vel para definir o tamanho do vetor e variavel auxiliar para o la�o for
        int j = 1; //Vari�vel auxiliar na hora de montar o vetor B
        do { //La�o do-while pra definir o tamanho dos vetores
            printf("Digite a quantidade de n�meros desejados: \n");
            scanf("%d", &tamanho);
            if (tamanho < 4 || tamanho > 20) {
                printf("Digite um valor entre 4 e 20!\n\n");
            }
        } while (tamanho < 4 || tamanho > 20);

        int a[tamanho], b[tamanho]; //Declara��o dos vetores com o tamanho definido pelo usu�rio

        for (i = 0; i < tamanho; i++) { //La�o for pro usu�rio armazenar os n�meros do vetor A e tamb�m processo para armazenar os n�meros do vetor B
            printf("Digite um n�mero para armazenar no vetor A: \n");
            scanf("%d", &a[i]);
            b[tamanho - j] = a[i];
            /* Eu fiz o seguinte pra armazenar de forma invertida, se o tamanho for 4, ent�o o valor m�ximo de i vai ser 3. Ent�o pra armazenar de uma vez eu fiz o seguinte, a cada vez que o usu�rio digitar, eu fa�o essa f�rmula (tamanho - j), onde o valor inicial de j � 1 e vai aumentando a cada vez que o la�o for � executado
            SUPONDO QUE O TAMANHO QUE O USU�RIO QUER � 4:
            A - i = 0, B - tamanho - 1 = 3
            A - i = 1, B - tamanho - 2 = 2
            A - i = 2, B - tamanho - 3 = 1
            A - i = 3, B - tamanho - 4 = 0 */
            j++; //Incremento na vari�vel j no fim do la�o
        }
        for (i = 0; i < tamanho; i++) { //Print dos vetores
            printf("Posi��o %d - Vetor A: %d | Vetor B: %d\n", i, a[i], b[i]);
        }
    }
    return 0;
}
#endif // ex10

#ifdef ex11
int num_intInput() {
    int a;
    printf("Digite um n�mero: \n");
    scanf("%d", &a);
    return (a);
}
int main()
{
    /* Leia tr�s vetores (A, B e C) de uma dimens�o com 5 elementos cada. Construa o vetor D, sendo este a jun��o dos tr�s outros vetores. Armazene no vetor D o primeiro elemento do vetor A depois do B e do C e assim sucessivamente. Apresentar o conte�do de todos os vetores. Exiba quantas vezes apareceram n�meros negativos no vetor D.*/
    setlocale(LC_ALL, "");
    int start;
    start = menu();
    if (start == 1) {
        int a[5], b[5], c[5], d[15];
        int contador = 0;
        for (int i = 0; i <= 4; i++) {
            a[i] = num_intInput();
            d[i] = a[i];
            if (a[i] < 0) {
                contador = contador + 1;
            }
        }
        for (int i = 0; i <= 4; i++) {
            b[i] = num_intInput();
            d[i+5] = b[i];
            if (b[i] < 0) {
                contador = contador + 1;
            }
        }
        for (int i = 0; i <= 4; i++) {
            c[i] = num_intInput();
            d[i+10] = c[i];
            if (c[i] < 0) {
                contador = contador + 1;
            }
        }

        for (int i = 0; i <= 4; i++) {
            printf("Posi��o %d - A: %d; B: %d; C: %d\nD: %d %d %d\n", i, a[i], b[i], c[i], d[i], d[i+5], d[i+10]);
        }
        if (contador > 0) {
            printf("Foram digitados %d n�meros negativos!", contador);
        }
    }
    return 0;
}
#endif // ex11

#ifdef ex12
int main()
{
    /* Leia o vetor A com 10 elementos positivos. Construa o vetor B de mesmo tipo, e cada elemento de B deve ser a metade de cada elemento de A. Exiba em que Vetor e em que posi��es apareceram valores superiores a 4*/
    setlocale(LC_ALL, "");
    int start;
    start = menu();
    if (start == 1) {
        int a[10], b[10];
        int contador = 0;
        for (int i = 0; i < 10; i++) {
            do {
                printf("Digite um n�mero positivo: \n");
                scanf("%d", &a[i]);
                if (a[i] < 0) {
                    printf("Digite apenas n�meros positivos! \n\n");
                }
            } while (a[i] < 0);
            b[i] = a[i] / 2;
        }

        for (int i = 0; i < 10; i++) {
            printf("Posi��o %d - Vetor A: %d; Vetor B: %d\n", i, a[i], b[i]);
            if (a[i] > 4 && b[i] > 4) {
                printf("Vetor A e B com n�mero maior que 4 na posi��o %d\n", i);
            }
            else if (a[i] > 4) {
                printf("Vetor A com n�mero maior que 4 na posi��o %d\n", i);
            }
            else if (b[i] > 4) {
                printf("Vetor B com n�mero maior que 4 na posi��o %d\n", i);
            }
        }
    }
    return 0;
}
#endif // ex12

#ifdef ex13
int main()
{
    /* Elabore um programa que efetue o c�lculo de uma tabuada de um n�mero qualquer e armazene os resultados no vetor A de uma dimens�o para 10 elementos. O usu�rio dever� digitar o n�mero e o programa dever� construir e exibir a tabuada correspondente.*/
    setlocale(LC_ALL, "");
    int start;
    start = menu();
    if (start == 1) {
        int a[10], i;
        do {
            printf("Digite um n�mero para efetuar a sua tabuada: \n");
            scanf("%d", &a[0]);
            if (a[0] < 0) {
                printf("Digite apenas n�meros positivos! \n\n");
            }
        } while (a[0] < 0);

        for (i = 1; i <= 10; i++) {
            int produto = a[0] * i;
            printf("%d * %d = %d\n", a[0], i, produto);
        }
    }
    return 0;
}
#endif // ex13

#ifdef ex14
int main()
{
    /* Receba a temperatura m�dia de cada m�s do ano e armazene essas temperaturas em um vetor; calcule e mostre a maior, a menor temperatura do ano e a m�dia das temperaturas. Mostre todas as temperaturas armazenadas.*/
    setlocale(LC_ALL, "");
    int start;
    start = menu();
    if (start == 1) {
        float temp[12];
        float media = 0;
        float maior = 0;
        float menor = 0;
        for (int i = 0; i < 12; i++) {
            do {
                printf("Digite a temperatura m�dia do m�s %d: \n", i+1);
                scanf("%f", &temp[i]);
                if (temp[i] < 0) {
                    printf("Digite apenas valores positivos! \n\n");
                }
            } while (temp[i] < 0);
            if (i == 0) {
                maior = temp[i];
                menor = temp[i];
            }
            else if (maior < temp[i]) {
                maior = temp[i];
            }
            else if (menor > temp[i]) {
                menor = temp[i];
            }
            printf("%.2f\n", maior);
            printf("%.2f\n", menor);

            media = (media + temp[i]) / (i+1);
        }
        for (int i = 0; i < 12; i++) {
            printf("Temperatura m�dia do m�s %d: %.2f�C\n", i+1, temp[i]);
        }
        printf("A maior temperatura m�dia foi de %.2f�C, a menor foi de %.2f�C.\nA temperatura m�dia anual foi de %.2f�C", maior, menor, media);
    }
    return 0;
}
#endif // ex14

#ifdef ex15
int main()
{
    /* Receba a nota de dez alunos e armazene essas notas em um vetor. Calcule e mostre:

a) A m�dia da classe;

b) A quantidade de alunos aprovados, isto �, com nota >=7;

c) A quantidade de alunos reprovados, isto �, com nota <7.*/
    setlocale(LC_ALL, "");
    int start;
    start = menu();
    if (start == 1) {
        float notas[10];
        float media = 0;
        int aprovados = 0;
        int reprovados = 0;

        for (int i = 0; i < 10; i++) {
            do {
                printf("Digite a nota do aluno %d: \n", i+1);
                scanf("%f", &notas[i]);
                if (notas[i] < 0) {
                    printf("Digite apenas n�meros positivos! \n\n");
                }
            } while (notas[i] < 0);

            if (notas[i] >= 7) {
                aprovados = aprovados + 1;
            }
            else {
                reprovados = reprovados + 1;
            }
            media = (media + notas[i]) / (i+1);
        }

        for (int i = 0; i < 10; i++) {
            printf("Nota do aluno %d: %.2f\n", i+1, notas[i]);
        }

        if (aprovados > 0) {
            printf("%d alunos foram aprovados!\n", aprovados);
        }
        if (reprovados > 0) {
            printf("%d alunos foram reprovados!\n", reprovados);
        }
    }
    return 0;
}
#endif // ex15

#ifdef ex16
int main()
{
    /* Receba o peso via teclado e o n�mero de identifica��o gerado pelo programador contendo no m�ximo de 15 pessoas. A quantidade de indiv�duos ser� definida pelo usu�rio. Armazene esses dados em dois vetores, o primeiro contendo os pesos e o segundo contendo os n�meros de identifica��o. Calcule e mostre:

a) Quantas pessoas apresentaram peso superior ao menor peso. Armazene os n�meros de identifica��o das pessoas que satisfazem essa condi��o. Mostre o conte�do desse vetor.

b) Armazene num outro vetor os pesos superiores a 55 quilos e menores ou igual a 80 quilos das pessoas. Mostre o conte�do desse vetor.*/
    setlocale(LC_ALL, "");
    int start;
    start = menu();
    if (start == 1) {
        int tam;
        do {
            printf("Digite o tamanho de vetor desejado: \n");
            scanf("%d", &tam);
            if (tam < 0 || tam > 15) {
                printf("Digite apenas n�meros entre 0 e 15! \n\n");
            }
        } while (tam < 0 || tam > 15);

        float vetPeso[tam];
        int numId[tam];
        int menor;
        int contador;

        for (int i = 0; i < tam; i++) {
            do {
                printf("Digite o peso: \n");
                scanf("%f", &vetPeso[i]);
                if (vetPeso[i] < 0) {
                    printf("Digite um valor v�lido! \n\n");
                }
            } while (vetPeso[i] < 0);
            if (i == 0) {
                menor = vetPeso[i];
            }
            if (menor > vetPeso[i]) {
                menor = vetPeso[i];
            }

            numId[i] = 100 + (i + 1);
        }
        printf("\nVETOR CONTENDO PESO SUPERIOR AO MENOR PESO: \n");
        for (int i = 0; i < tam; i++) {
            if (vetPeso[i] > menor) {
                contador = contador + 1;
                printf("O ID %d apresentou %.2fkg\n", numId[i], vetPeso[i]);
            }
        }
        printf("\nVETOR COM PESOS ENTRE 55 E 80KG: \n");
        for (int i = 0; i < tam; i++) {
            if (vetPeso[i] > 55 && vetPeso[i] <= 80) {
                printf("O ID %d apresentou %.2fkg\n", numId[i], vetPeso[i]);
            }
        }

    }
    return 0;
}
#endif // ex16

#ifdef ex17
int main()
{
    /*Efetue a leitura de dez elementos para o vetor A. Construa o vetor B, observando a seguinte lei de forma��o: se o valor do �ndice do vetor for par, o valor do elemento deve ser multiplicado pelo valor 5; sendo o �ndice �mpar, dever� ser somado ao valor existente o valor 5. Mostre o conte�do dos dois vetores.*/
    setlocale(LC_ALL, "");
    int start;
    start = menu();
    if (start == 1) {
        int a[10], b[10];
        for (int i = 0; i < 10; i++) {
            printf("Digite um valor: \n");
            scanf("%d", &a[i]);
            if (i % 2 == 0) {
                b[i] = a[i] * 5;
            }
            else {
                b[i] = a[i] + 5;
            }
        }

        for (int i = 0; i < 10; i++) {
            printf("Posi��o %d - A: %d; B: %d\n", i, a[i], b[i]);
        }
    }
    return 0;
}
#endif // ex17

#ifdef ex18
int main()
{
    /* Efetue a leitura de dez elementos para o vetor A. No final, apresente a somat�ria de todos os elementos do vetor A que sejam �mpares. Armazene no vetor B a posi��o em que est�o armazenados os n�meros �mpares. Mostre o conte�do dos dois vetores.*/
    setlocale(LC_ALL, "");
    int start;
    start = menu();
    if (start == 1) {
        int a[10], b[10];
        int soma = 0;

        for (int i = 0; i < 10; i++) {
            printf("Digite um n�mero: \n");
            scanf("%d", &a[i]);
            float paridade = a[i] %  2;
            if (paridade != 0) {
                b[i] = i;
                soma = soma + a[i];
            }
        }

        for (int i = 0; i < 10; i++) {
            printf("Posi��o %d - %d\n", i, a[i]);
        }
        printf("Elementos �mpares nas posi��es:");
        for (int i = 0; i < 10; i++) {
            float paridade = a[i] %  2;
            if (paridade != 0) {
                printf("%d ", b[i]);
            }
        }
        printf("\nA soma dos n�meros �mpares � de %d", soma);
    }
    return 0;
}
#endif // ex18

#ifdef ex19
int main()
{
    /* Leia 12 elementos inteiros para o vetor A e construa o vetor B com a mesma dimens�o, observando a seguinte lei de forma��o: �Todo elemento do vetor A que for �mpar deve ser multiplicado por 2; caso contr�rio, o elemento do vetor A deve permanecer constante�. Exiba o conte�do dos dois vetores.*/
    setlocale(LC_ALL, "");
    int start;
    start = menu();
    if (start == 1) {
        int a[12], b[12];
        for (int i = 0; i < 12; i++) {
            printf("Digite um n�mero: \n");
            scanf("%d", &a[i]);
            int paridade = a[i] % 2;
            if (paridade == 0) {
                b[i] = a[i];
            }
            else {
                b[i] = a[i] * 2;
            }
        }

        for (int i = 0; i < 12; i++) {
            printf("Posi��o %d - A: %d; B: %d\n", i, a[i], b[i]);
        }

        }
    return 0;
}
#endif // ex19

#ifdef ex20
int main()
{
    /* Receba o sal�rio e o n�mero de identifica��o gerado pelo programador contendo no m�ximo 13 pessoas. A quantidade de indiv�duos ser� definida pelo usu�rio. Armazene esses dados em dois vetores, o primeiro contendo os sal�rios e o segundo contendo os n�meros de identifica��o. Calcule e mostre:

a) Armazene em um vetor os n�meros de identifica��o de todas as pessoas que apresentam a maior sal�rio.

b) Armazene num outro vetor os n�meros de identifica��o de todas as pessoas que apresentam a menor sal�rio encontrado. Mostre o conte�do de todos os vetores.*/
    setlocale(LC_ALL, "");
    int start;
    start = menu();
    if (start == 1) {
        int tam;
        do {
            printf("Digite o tamanho do vetor: \n");
            scanf("%d", &tam);
            if (tam <= 0 || tam > 13) {
                printf("Digite um n�mero de 0 a 13! \n\n");
            }
        } while (tam <= 0 || tam > 13);

        float salario[tam], maior, menor;
        int numId[tam], vetMaior[tam], vetMenor[tam];

        for (int i = 0; i < tam; i++) {
            do {
                printf("Digite o sal�rio: \n");
                scanf("%f", &salario[i]);
                if (salario[i] <= 0) {
                    printf("Digite um valor v�lido! \n\n");
                }
            } while (salario[i] <= 0);
            if (i == 0) {
                maior = salario[i];
                menor = salario[i];
            }
            if (maior < salario[i]) {
                maior = salario[i];
            }
            if (menor > salario[i]) {
                menor = salario[i];
            }
            numId[i] = 100 + (i+1);
        }

        for (int i = 0; i < tam; i++) {
            if (salario[i] == maior) {
                vetMaior[i] = numId[i];
            }
            else {
                vetMaior[i] = 0;
            }
            if (salario[i] == menor) {
                    vetMenor[i] = numId[i];
            }
            else {
                vetMenor[i] = 0;
            }
        }

        for (int i = 0; i < tam; i++) {
            if (i == 0) {
                printf("\nLista de funcion�rios com o maior sal�rio: \n");
            }
            if (vetMaior[i] != 0) {
                printf("%d\n", vetMaior[i]);
            }

            if (i == tam - 1) {
                for (int i = 0; i < tam; i++) {
                    if (i == 0) {
                        printf("\nLista de funcion�rios com o menor sal�rio: \n");
                    }
                    if (vetMenor[i] != 0) {
                        printf("%d\n", vetMenor[i]);
                    }
                }
            }
        }


    }
    return 0;
}
#endif // ex20

#ifdef ex21
int numInput() {
    int a;
    printf("Digite um n�mero: \n");
    scanf("%d", &a);
    return (a);
}
int main()
{
    /* Leia 8 elementos (valores inteiros) para os vetores A e B de uma dimens�o do tipo vetor. Construir vetores C e D de mesmo tipo e dimens�o. O vetor C deve ser formado pelos elementos de �ndice �mpar dos vetores A e B, e O vetor D deve ser formado pelos elementos de �ndice par dos vetores A e B. Apresente os conte�dos de todos os vetores.*/
    setlocale(LC_ALL, "");
    int start;
    start = menu();
    if (start == 1) {
        int a[8], b[8], c[8], d[8];
        for (int i = 0; i < 8; i++){
            if (i == 0) {
                printf("Valores para o vetor A:\n");
            }
            a[i] = numInput();
        }
        for (int i = 0; i < 8; i++){
            if (i == 0) {
                printf("Valores para o vetor B:\n");
            }
            b[i] = numInput();
        }
        for (int i = 0; i < 8; i++){
            int paridade = i % 2;
            if (paridade != 0) {
                c[i] = a[i];
                c[i+3] = b[i];
            }
            else {
                d[i] = a[i];
                d[i+3] = b[i];
            }
        }
        for (int i = 0; i < 8; i++){
            if (i == 0) {
            printf("\nVetores A e B\n");
            }
            printf("Posi��o %d - A: %d; B: %d\n", i, a[i], b[i]);

            if (i == 7) {
                for (int i = 0; i < 8; i++) {
                    if (i == 0) {
                        printf("\nVetores C e D\n");
                    }
                    printf("Posi��o %d - C: %d; D: %d\n", i, a[i], b[i]);
                }
            }
        }

        }
    return 0;
}
#endif // ex21

#ifdef ex22
int numInput() {
    int a;
    printf("Digite um n�mero: \n");
    scanf("%d", &a);
    return (a);
}
int main()
{
    /*Leia dois vetores A e B de uma dimens�o com 6 elementos. O vetor A deve aceitar apenas a entrada de valores pares, enquanto o vetor B deve aceitar apenas a entrada de valores �mpares. A entrada dos dois vetores deve ser validada pelo programa e n�o pelo usu�rio. Construir o vetor C que dever� ser a jun��o dos vetores A e B, de modo que seja armazenado um elemento do vetor A e em seguida um elemento do vetor B. O vetor C contenha 12 elementos. Exiba os conte�dos dos vetores A e B juntos e depois o conte�do do vetor C.*/
    setlocale(LC_ALL, "");
    int start;
    start = menu();
    if (start == 1) {
        int a[6], b[6], c[12];
        int paridade;
        int j = 1;
        printf("Vetor A:\n");
        for (int i = 0; i < 6; i++) {
            do {
                a[i] = numInput();
                paridade = a[i] % 2;
                if (paridade != 0) {
                    printf("Digite apenas valores pares!\n\n");
                }
            } while (paridade != 0);
        }

        printf("Vetor B:\n");
        for (int i = 0; i < 6; i++) {
            do {
                b[i] = numInput();
                paridade = b[i] % 2;
                if (paridade == 0) {
                    printf("Digite apenas valores �mpares! \n\n");
                }
            } while (paridade == 0);
            }

        for (int i = 0; i < 12; i++){
            c[i+i] = a[i];
            c[i+j] = b[i];
            j++;
        }

        for (int i = 0; i < 6; i++) {
            if (i == 0) {
                printf("\nVetores A e B:\n");
            }
            printf("Posi��o %d - A: %d; B: %d\n", i, a[i], b[i]);
        }

        for (int i = 0; i < 12; i++) {
            if (i == 0) {
                printf("\nVetor C:\n");
            }
            printf("Posi��o %d - C: %d\n", i, c[i]);
        }
        }

    return 0;
    }
#endif // ex22

#ifdef exteste
main(){
    float A[10],maior;
    int i, vezes = 0;
    setlocale(LC_ALL,"");

    for(i=0; i<10; i++)
    {
        do
        {
            printf("Insira 10 n�meros positivos[%d]:",i);
            scanf("%f", &A[i]);
            if(A[i]<=0) {
                printf("N�mero inv�lido, Digite apenas n�meros positivos.\n");
            }
            if (i == 0) {
                maior = A[i];
            }
            else if (maior < A[i]) {
                maior = A[i];
            }
        }
        while(A[i]<=0);
    }
    for(i=0; i<10; i++)
    {
        if(A[i] == maior)
        {
            vezes++;
        }
        printf("Os n�meros inseridos no vetor A[%d] s�o: %.2f\n",i,A[i]);
    }
    printf("O maior n�mero apareceu %d vezes nas posi��es: ", vezes);
    for(i=0; i<10; i++)
    {
        if (A[i] == maior) {
            printf("%d ", i);
        }
    }
    return 0;
}
#endif // exteste



