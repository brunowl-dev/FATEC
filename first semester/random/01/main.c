#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Receba via teclado um  n�mero positivo e exiba esse valor com reajuste de 10%.

    float numero;

    printf("Digite o n�mero a ser ajustado: \n");
    scanf("%f", numero);

    float numeroAjustado = numero + (0.1*numero);

    printf("O seu n�mero ajustado � %.2f\n", numeroAjustado);
    return 0;
}
