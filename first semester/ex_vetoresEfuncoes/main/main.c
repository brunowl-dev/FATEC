#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define ex6
#define funcMenu

#ifdef funcMenu
int menu () {
    char iniciar;
    do {
        printf("Deseja iniciar o programa?\nDigite 's' para sim ou 'n' para n�o\n");
        scanf(" %c", &iniciar);
        if (iniciar != 's' && iniciar != 'n' && iniciar != 'S' && iniciar != 'N') {
            printf("Insira apenas os as letras 's' ou 'n'.\n\n");
        }
    } while (iniciar != 's' && iniciar != 'n' && iniciar != 'S' && iniciar != 'N');

    if (iniciar == 's' || iniciar == 'S') {
        return(1);
    }
    else {
        return(0);
    }
}
#endif // funcMenu

#ifdef ex1
float a[10];
float b[10];
Armazena() {
    int i;
    for (i = 0; i < 10; i++) {
        printf("Digite um n�mero para armazenar no vetor: \n");
        scanf("%f", &a[i]);
    }
}
vetor_B() {
    int i, paridade;
    for (i = 0; i < 10; i++) {
        paridade = i % 2;
        if (paridade == 0) {
            b[i] = a[i] + 2;
        }
        else {
            b[i] = a[i] + 3;
        }
    }
}
Exiba() {
    int i;
    for (i = 0; i < 10; i++) {
        printf("Posi��o %d - A: %.2f; B: %.2f\n", i, a[i], b[i]);
    }
}
int main()
{
    /* Crie o programa dividido em fun��es:

a) Fun��o Armazena: � utilizada para guardar dez n�meros quaisquer no vetor A.

b) Fun��o Vetor_B: construa o vetor B de mesma dimens�o com os elementos do vetor A baseado nas seguintes condi��es: se o �ndice for par soma dois ao conte�do do vetor, caso o �ndice seja �mpar some tr�s ao conte�do do vetor A.

c) Exiba: exiba no interior desta fun��o o conte�do dos dois vetores.*/
    setlocale(LC_ALL, "");
    int start;
    start = menu();
    if (start == 1) {
        Armazena();
        vetor_B();
        Exiba();
    }

    return 0;
}
#endif // ex1

#ifdef ex2
float a[12];
Armazena() {
    int i;
    for (i = 0; i < 12; i++) {
        printf("Digite um n�mero para armazenar no vetor: \n");
        scanf("%f", &a[i]);
    }
}
quant_Positivos() {
    int i;
    int numPositivos = 0;
    for (i = 0; i < 12; i++) {
        if (a[i] >= 0) {
            numPositivos = numPositivos + 1;
        }
    }
    if (numPositivos > 0) {
        printf("Foram digitados %d n�meros positivos!\n", numPositivos);
    }
}
int Exiba() {
    int i, contador121 = 0;
    for (i = 0; i < 12; i++) {
        if (a[i] > 121) {
            printf("Posi��o %d - A: %.2f\n", i, a[i]);
            contador121++;
        }
    }
    return contador121;
}
Negativos() {
    float somaNegativos = 0;
    int i, contador = 0;
    for (i = 0; i < 12; i++) {
        if (a[i] < 0) {
            somaNegativos = somaNegativos + a[i] ;
            contador++;
        }
    }
    if (contador != 0) {
        somaNegativos = somaNegativos / contador;
        printf("A m�dia dos n�meros negativos �: %.2f\n", somaNegativos);
    }
}
int main()
{
    /* .Crie o programa dividido em fun��es:

a) Fun��o Armazena: � utilizada para guardar doze n�meros quaisquer no vetor A.

b) Fun��o Quant_Positivos: calcule a quantidade de n�meros positivos contidos no vetor A.

c) Exiba: mostre nesta fun��o em que posi��es aparecem os n�meros maiores que 121 que est�o armazenados no vetor A.

d) Negativos: calcule e exiba no interior desta fun��o a m�dia dos n�meros negativos.*/
    setlocale(LC_ALL, "");
    int start;
    start = menu();
    if (start == 1) {
        Armazena();
        quant_Positivos();
        Exiba();
        if (Exiba() == 0) {
            printf("N�o foram digitados nenhum n�mero maior que 121!\n");
        }
        Negativos();
    }

    return 0;
}
#endif // ex2

#ifdef ex3
int a[7];
int inverte_A[7];
Armazena() {
    int i;
    for (i = 0; i < 7; i++) {
        printf("Digite um n�mero para armazenar no vetor: \n");
        scanf("%d", &a[i]);
    }
}
float MED_5() {
    float soma = 0;
    int divisor = 0;
    float media;
    int i;
    for (i = 0; i < 7; i++) {
        if (a[i] % 5 == 0) {
            soma = soma + a[i];
            divisor = divisor + 1;
        }
    }
    if (divisor != 0) {
        soma = soma / divisor;
    }
    return (soma);
}
INVERTE() {
    int i, j = 6;
    for (i = 0; i < 7; i++) {
        inverte_A[i] = a[j];
        j--;
    }
    for (i = 0; i < 7; i++) {
        printf("Posi��o %d - A: %d; Inverte_A: %d\n", i, a[i], inverte_A[i]);
    }
}
float Menor_Num() {
    int menor, i;
    for (i = 0; i < 7; i++) {
        if (i == 0) {
            menor = a[i];
        }
        else if (menor > a[i]) {
            menor = a[i];
        }
    }
    return (menor);
}
int main()
{
    /* Crie o programa dividido em fun��es:

a) Fun��o Armazena: � utilizada para guardar 7 n�meros positivos no vetor A.

b) Fun��o MED_5: calcule a m�dia dos n�meros que s�o m�ltiplos de cinco. Exiba est� m�dia no interior da fun��o main.

c) Fun��o INVERTE: armazene no vetor inverte_A os n�meros armazenados no vetor A em ordem inversa. Exiba separadamente o conte�do de cada vetor.

d) Fun��o Menor_Num: verifique o menor n�mero encontrado no vetor A e exiba no interior da fun��o main.*/
    setlocale(LC_ALL, "");
    int start;
    start = menu();
    if (start == 1) {
    Armazena();
    float media = MED_5();
    if (media != 0) {
        printf("A m�dia dos n�meros m�ltiplos de cinco �: %.2f\n", media);
    }
    INVERTE();
    int menor_numero = Menor_Num();
    printf("O menor n�mero encontrado no vetor A �: %d\n", menor_numero);
    }
    return 0;
}
#endif // ex3

#ifdef ex4
int x[12];
//Nao achei outra forma de limitar o n�mero de elementos do vetor al�m desse jeito, determinando um valor m�ximo a partir do enunciado
    /* Crie o programa dividido em fun��es:

a) Fun��o Armazena: � utilizada para guardar no m�nimo 3 e no m�ximo 12 n�meros quaisquer no vetor X. Essa quantidade � definida como uma vari�vel local � fun��o main chamada de quant.

b) Fun��o Soma_7: calcule a soma apenas dos n�meros contidos no vetor X que s�o divis�veis por 7. Exiba esta soma no interior desta fun��o.

c) Fun��o Menor_Par: verifique o menor n�mero par contido no vetor X. Exiba no interior da fun��o main. Caso n�o tenha nenhum n�mero par no interior do vetor X, informe ao usu�rio no interior da fun��o main.

d) Fun��o ExibaMenor_Par: exiba em que posi��es o menor n�mero par apareceu no veotr X.*/
int Armazena(int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("Digite um n�mero: \n");
        scanf("%d", &x[i]);
    }
}
int Soma_7(int quantidade) {
    int soma = 0;
    for (int i = 0; i < quantidade; i++) {
        if (x[i] % 7 == 0) {
            soma = soma + x[i];
        }
    }
    if (soma != 0) {
        printf("A soma dos n�meros divis�veis por 7 no vetor X �: %d\n", soma);
    }
    else {
        printf("N�o foram digitados n�meros divis�veis por 7!\n");
    }
}
int Menor_Par(int quantidade) {
    int menor,i, contpar=0;
    for (i = 0; i < quantidade; i++) {
        if (x[i] % 2 == 0) {
        contpar++;
        if (contpar == 1) {
            menor = x[i];
        }
        else if (menor > x[i]) {
            menor = x[i];
        }
        }
        }

    if (contpar==0) {
        menor=1;
    }
    return (menor);
}
void ExibaMenor_Par(int menor, int quantidade) {
    printf("O menor n�mero par apareceu nas posi��es:");
    for (int i = 0; i < quantidade; i++) {
        if (x[i] == menor) {
            printf("%d ", i);
        }
    }
}
int main()
{
    setlocale(LC_ALL, "");
    int start, menor_par;
    start = menu();
    if (start == 1) {
        int quant;
        do {
            printf("Digite um a quantidade de n�meros para armazenar no vetor X: ");
            scanf("%d", &quant);
            if (quant < 3 || quant > 12) {
                printf("\nA quantidade deve ser entre 3 e 12!\n\n");
            }
        } while (quant < 3 || quant > 12);
        Armazena(quant);
        Soma_7(quant);
        menor_par= Menor_Par(quant);
        if (menor_par == 1) {
            printf("N�o foram digitados n�meros pares!\n");
        }
        else {
            printf("O menor n�mero par �: %d\n", menor_par);
            ExibaMenor_Par(menor_par, quant);
        }
    }
    return 0;
}
#endif // ex4

#ifdef ex5
/*Crie o programa dividido em fun��es:

a. Fun��o Armazenas :armazena no vetor A no m�nimo 7 e no m�ximo 18 n�meros quaisquer. Essa quantidade � determinada pelo usu�rio e definida como uma vari�vel local � fun��o main chamada de quant.

b. Fun��o VetPositivos: armazene neste vetor apenas os n�meros maiores ou iguais azero contidos no vetor A. Caso n�o tenha sido encontrado no vetorA nenhum n�mero que satisfa�a essas condi��es informe ao usu�rio no interior da fun��o main.

c. Fun��o Fatorial:crie uma fun��o que calcule o fatorial de cada n�mero do VetPositivos e o seu fatorial no vetor  FatorialVetPositivos.*/
int a[18];
int VetPositivos[18];
int FatorialVetPositivos[18];
Armazenas(int quantidade) {
    int i;
    for (i = 0; i < quantidade; i++) {
        printf("Digite um n�mero para armazenar na posi��o %d do vetor A: \n", i);
        scanf("%d", &a[i]);
    }
}
int funcVetPositivos(int quantidade) {
    int i, contador = 0;
    for (i = 0; i < quantidade; i++) {
        if (a[i] >= 0) {
            VetPositivos[i] = a[i];
            contador++;
        }
    }
    return (contador);
}
Fatorial(int quantidade) {
    int i, j, fatorial;
    for (i = 0; i < quantidade; i++) {
        if (VetPositivos[i] > 0) {
            for (j = 1; j < VetPositivos[i]; j++) {
                if (j == 1) {
                    fatorial = j * VetPositivos[i];
                }
                else {
                    fatorial = fatorial * j;
                }
            }
            FatorialVetPositivos[i] = fatorial;
        }
        else {
            FatorialVetPositivos[i] = 0;
        }
    }
}
int main()
{
    setlocale(LC_ALL, "");
    int start, quant, i;
    start = menu();
    if (start == 1) {
        do {
            printf("Digite a quantidade de elementos para armazenar no vetor: ");
            scanf("%d", &quant);
            if (quant < 7 || quant > 18) {
                printf("\nA quantidade de elementos deve ser entre 7 e 18!\n\n");
            }
        } while (quant < 7 || quant > 18);

        Armazenas(quant);
        if (funcVetPositivos(quant) == 0) {
            printf("N�o foi digitado nenhum n�mero positivo!\n");
        }
        Fatorial(quant);
        for (i = 0; i < quant; i++) {
            if (a[i] >= 0) {
                printf("Posi��o %d - A: %d; Fatorial: %d\n", i, a[i], FatorialVetPositivos[i]);
            }
            else {
                printf("Posi�ao %d - A: %d\n", i, a[i]);
            }
        }
    }
    return 0;
}
#endif // ex5

#ifdef ex6
/* 6. Crie o programa dividido em fun��es:
a) Fun��o Dados :armazena no vetor A no m�nimo 5 e no m�ximo 20 n�meros pares . Essa quantidade � determinada pelo usu�rio e definida como uma vari�vel local � fun��o main chamada de quant
b) Fun��o Pares: est� fun��o deve garantir que apenas n�meros pares devem ser armazenados no vetor A.
c) Fun��o MaiorMult7e11: verifique o maior n�mero que � m�ltiplo de 7 e 11 ao mesmo tempo contido no vetor A. Exiba no interior da fun��o ExibaMultiplo7e11. Caso n�o tenha nenhum m�ltiplo de 7 e 11 ao mesmo tempo contido no vetor A informe ao usu�rio tamb�m no interior da fun��o ExibaMultiplo7e11.
d) Fun��o ExibaMaior Mult7e11: armazene no vetor Mult7e11 apenas os n�meros que est�o contidos no vetor A que s�o m�ltiplos de 7 e 11.Exiba o maior m�ltiplo de 7 e 11 contido no vetor A e se n�o houver nenhum m�ltiplo de 7 e 11 ao usu�rio. Exiba se existir o conte�do do vetor Mult7e11.*/
int a[20];
Dados(int quantidade) {
    int i;
    for (i = 0; i < quantidade; i++) {
        a[i] = Pares();
    }
}
int Pares() {
    int num;
    do {
        printf("Digite um n�mero: ");
        scanf("%d", &num);
        if (num % 2 != 0 && num < 0) {
            printf("Digite apenas n�meros pares!\n\n");
        }
    } while (num % 2 != 0 && num < 0);
    return (num);
}
int MaiorMult7e11(int quantidade) {
    int i, num = 0;
    for (i = 0; i < quantidade; i++) {
        if (a[i] % 7 == 0 && a[i] % 11 == 0 && num < a[i]) {
            num = a[i];
        }
    }
    return (num);
}
ExibaMultiplo7e11(int quantidade) {
    int maior = MaiorMult7e11(quantidade);
    if (maior == 0) {
        printf("N�o foi digitado nenhum n�mero m�ltiplo de 7 e 11!\n");
    }
    else {
        printf("O maior n�mero m�ltiplo de 7 e 11 �: %d\n", maior);
    }
}
int main()
{
    setlocale(LC_ALL, "");
    int start, quant;
    start = menu();
    if (start == 1) {
        do {
            printf("Digite a quantidade de elementos para armazenar no vetor A: ");
            scanf("%d", &quant);
            if (quant < 5 || quant > 20) {
                printf("\nA quantidade de elementos deve ser entre 5 e 20!\n\n");
            }
        } while (quant < 5 || quant > 20);
        Dados(quant);
        ExibaMultiplo7e11(quant);
    }
    return 0;
}
#endif ex6
