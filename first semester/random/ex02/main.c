#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroId;
    float nota1, nota2, nota3, mediaExercicios;

    printf("Insira o seu n�mero de identifica��o: \n");
    scanf("%i", &numeroId);

    printf("Insira o n�mero das suas notas e da sua m�dia de exerc�cios separando as com um espa�o: \n");
    scanf("%f, %f, %f, %f", &nota1, &nota2, &nota3, &mediaExercicios);

    float mediaAproveitamento = (nota1 + (nota2 * 2) + (nota3 * 3) + mediaExercicios) / 7;

    if (mediaAproveitamento < 4)
    {
        printf("Seu n�mero de identifica��o �: %i \n", numeroId);
        printf("Suas notas 1, 2 e 3 foram respectivamente %.2f, %.2f, %.2f e sua m�dia de exerc�cios foi de %.2f \n", nota1, nota2, nota3, mediaExercicios);
        printf("Sua m�da de aproveitamento foi de %.2f pontos, ou seja seu conceito foi E e voc� foi reprovado! \n", mediaAproveitamento);
    }

    if (6 > mediaAproveitamento > 4)
    {
        printf("Seu n�mero de identifica��o �: %i \n", numeroId);
        printf("Suas notas 1, 2 e 3 foram respectivamente %.2f, %.2f, %.2f e sua m�dia de exerc�cios foi de %.2f \n", nota1, nota2, nota3, mediaExercicios);
        printf("Sua m�da de aproveitamento foi de %.2f pontos, ou seja seu conceito foi D e voc� foi reprovado! \n", mediaAproveitamento);
    }

    if (6 < mediaAproveitamento < 7.5)
    {
        printf("Seu n�mero de identifica��o �: %i \n", numeroId);
        printf("Suas notas 1, 2 e 3 foram respectivamente %.2f, %.2f, %.2f e sua m�dia de exerc�cios foi de %.2f \n", nota1, nota2, nota3, mediaExercicios);
        printf("Sua m�da de aproveitamento foi de %.2f pontos, ou seja seu conceito foi C e voc� foi aprovado! \n", mediaAproveitamento);
    }

    if (7.5 < mediaAproveitamento < 9)
    {
        printf("Seu n�mero de identifica��o �: %i \n", numeroId);
        printf("Suas notas 1, 2 e 3 foram respectivamente %.2f, %.2f, %.2f e sua m�dia de exerc�cios foi de %.2f \n", nota1, nota2, nota3, mediaExercicios);
        printf("Sua m�da de aproveitamento foi de %.2f pontos, ou seja seu conceito foi B e voc� foi aprovado! \n", mediaAproveitamento);
    }

    if (mediaAproveitamento > 9)
    {
        printf("Seu n�mero de identifica��o �: %i \n", numeroId);
        printf("Suas notas 1, 2 e 3 foram respectivamente %.2f, %.2f, %.2f e sua m�dia de exerc�cios foi de %.2f \n", nota1, nota2, nota3, mediaExercicios);
        printf("Sua m�da de aproveitamento foi de %.2f pontos, ou seja seu conceito foi A e voc� foi aprovado! \n", mediaAproveitamento);
    }
    return 0;
}
