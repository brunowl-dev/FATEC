#include <stdio.h>
#include <stdlib.h>

int main()
{
    //C�lculo de um sal�rio l�quido de um professor. Ser�o fornecidos via teclado o valor da hora aula,  o n�mero de aulas dadas e o  desconto do INSS.

    float valorHora;
    int numerodeAulas;
    float porcentagemINSS;

    printf("Quanto voc� ganha por hora de aula? \n");
    scanf("%f", &valorHora);
    printf("Quantas aulas voc� ministra? \n");
    scanf("%i", &numerodeAulas);
    printf("Qual � a sua porcentagem do INSS? (sem %) \n");
    scanf("%f", &porcentagemINSS);

    float salarioBruto = valorHora * numerodeAulas;
    float salarioLiquido = salarioBruto - (porcentagemINSS/100 * salarioBruto);

    printf("Seu sal�rio l�quido � %.2f", salarioLiquido);
    return 0;
}
