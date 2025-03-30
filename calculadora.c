#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float numInput() {
    float num;
    scanf("%f", &num);
    return (num);
}

int main() {
    setlocale(LC_ALL, "");
    float num1, num2;
    int i = 0;

    while (i == 0) {
        printf("\tCalculadora do Wai Lu\n");
        printf("Digite um dos seguintes n�meros para selecionar a opera��o desejada:\n");
        printf("1-Adi��o\n");
        printf("2-Subtra��o\n");
        printf("3-Divis�o\n");
        printf("4-Multiplica��o\n");
        printf("5-Resto de uma divis�o\n");
        printf("6-Encerrar o programa\n");
        scanf("%d", &i);

        if (i < 1 || i > 6) {
            printf("Op��o inv�lida!\n");
            i = 0;
        }
        else if (i == 1) {
            printf("Digite o primeiro n�mero\n");
            num1 = numInput();
            printf("Digite o segundo n�mero:\n");
            num2 = numInput();
            printf("O resultado da soma � %.2f\n", num1 + num2);
        }
        else if (i == 2) {
            printf("Digite o primeiro n�mero\n");
            num1 = numInput();
            printf("Digite o segundo n�mero:\n");
            num2 = numInput();
            printf("O resultado da subtra��o � %.2f\n", num1 - num2);
        }
        else if (i == 3) {
            printf("Digite o primeiro n�mero\n");
            num1 = numInput();
            printf("Digite o segundo n�mero:\n");
            num2 = numInput();
            printf("O resultado da divis�o � %.2f\n", num1 / num2);
        }
        else if (i == 4) {
            printf("Digite o primeiro n�mero\n");
            num1 = numInput();
            printf("Digite o segundo n�mero:\n");
            num2 = numInput();
            printf("O resultado da multiplica��o � %.2f\n", num1 * num2);
        }
        else if (i == 5) {
            printf("Digite o primeiro n�mero\n");
            num1 = numInput();
            int num1_resto = num1;
            printf("Digite o segundo n�mero:\n");
            num2 = numInput();
            int num2_resto = num2;
            printf("O resultado do resto da divis�o � %d\n", num1_resto % num2_resto);
        }
        else {
            break;
        }

        printf("Deseja executar o programa novamente?\n");
        printf("Digite 7 para sim e 6 para n�o\n");
        scanf("%d", &i);
        if (i == 7) {
            i = 0;
        }
        
    }

    printf("Programa encerrado!\n");

    return 0;
}