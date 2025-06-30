#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");


    int numeroId;
    float nota1, nota2, nota3, mediaExercicios;

    printf("Insira o seu n�mero de identifica��o: \n");
    scanf("%i", &numeroId);

    printf("Insira o n�mero das suas notas e da sua m�dia de exerc�cios separando as com uma v�rgula: \n");
    scanf("%f, %f, %f, %f", &nota1, &nota2, &nota3, &mediaExercicios);

    float mediaAproveitamento = (nota1 + (nota2 * 2) + (nota3 * 3) + mediaExercicios) / 7;

    char conceito;

    if (mediaAproveitamento < 4.0) {
        conceito = 'E';
        printf("Seu n�mero de identifica��o � %i \n Suas notam foram, respectivamente: %.2f, %.2f, %.2f, %.2f. \n Sua m�dia de aproveitamento foi de %.2f e seu conceito foi %c, ou seja, voc� foi REPROVADO! \n", numeroId, nota1, nota2, nota3, mediaExercicios, mediaAproveitamento, conceito);
    }

    if (mediaAproveitamento >= 4.0 && mediaAproveitamento < 6.0) {
        conceito = 'D';
        printf("Seu n�mero de identifica��o � %i \n Suas notam foram, respectivamente: %.2f, %.2f, %.2f, %.2f. \n Sua m�dia de aproveitamento foi de %.2f e seu conceito foi %c, ou seja, voc� foi REPROVADO! \n", numeroId, nota1, nota2, nota3, mediaExercicios, mediaAproveitamento, conceito);
    }

    if (mediaAproveitamento >= 6.0 && mediaAproveitamento < 7.5) {
        conceito = 'C';
        printf("Seu n�mero de identifica��o � %i \n Suas notam foram, respectivamente: %.2f, %.2f, %.2f, %.2f. \n Sua m�dia de aproveitamento foi de %.2f e seu conceito foi %c, ou seja, voc� foi APROVADO! \n", numeroId, nota1, nota2, nota3, mediaExercicios, mediaAproveitamento, conceito);
    }

    if (mediaAproveitamento >= 7.5 && mediaAproveitamento < 9.0) {
        conceito = 'B';
        printf("Seu n�mero de identifica��o � %i \n Suas notam foram, respectivamente: %.2f, %.2f, %.2f, %.2f. \n Sua m�dia de aproveitamento foi de %.2f e seu conceito foi %c, ou seja, voc� foi APROVADO! \n", numeroId, nota1, nota2, nota3, mediaExercicios, mediaAproveitamento, conceito);
    }

    if (mediaAproveitamento >= 9.0) {
        conceito = 'A';
        printf("Seu n�mero de identifica��o � %i \n Suas notam foram, respectivamente: %.2f, %.2f, %.2f, %.2f. \n Sua m�dia de aproveitamento foi de %.2f e seu conceito foi %c, ou seja, voc� foi APROVADO! \n", numeroId, nota1, nota2, nota3, mediaExercicios, mediaAproveitamento, conceito);
    }


    return 0;
}
