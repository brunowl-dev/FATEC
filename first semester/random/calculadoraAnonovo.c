#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    int convidados;
    float precoTotal, precoAluguel, precoBebida, rachada;

    printf("Digite o pre�o total do aluguel: \n");
    scanf("%f", &precoAluguel);

    printf("Digite o pre�o total da bebida: \n");
    scanf("%f", &precoBebida);

    precoTotal = precoAluguel + precoBebida;

    printf("Digite o n�mero de convidados: \n");
    scanf("%d", &convidados);

    for (int i = 1; i <= convidados; i++) {
        rachada = precoTotal / i;
        if (i == 1) {
            printf("\nA rachada com %d pessoa vai ficar R$%.2f", i, rachada);
        }
        else {
        printf("\nA rachada com %d pessoas vai ficar R$%.2f", i, rachada);
        }
    }
    printf("\n");
    system("pause");
}
