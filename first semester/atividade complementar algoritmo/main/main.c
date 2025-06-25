#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define ex15
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
    /* A import�ncia de R$ 780.000,00 ser� dividida entre tr�s ganhadores de um concurso. Sendo que da quantia total: � O primeiro ganhador receber� 46%; � O segundo receber� 32%; � O terceiro receber� o restante. Calcule e imprima a quantia ganha por cada um dos ganhadores. */
    setlocale(LC_ALL, "");
    int start;
    start = menu();

    float importancia, g1, g2, g3;
    float a,b,c;
    a = 46;
    b = 32;
    c = 100 -(a + b);
    importancia = 780000;

    if (start == 1) {
        g1 = importancia * (a/100);
        g2 = importancia * (b/100);
        g3 = importancia * (c/100);
        printf("O ganhador 1 vai receber: %.2f\nO ganhador 2 vai receber: %.2f\nO ganhador 3 vai receber: %.2f\n", g1, g2, g3);
    }
    return 0;
}
#endif // ex1

#ifdef ex2
int main()
{
    /* Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que solicite o n�mero de dias trabalhados pelo encanador e imprima a quantia l�quida que dever� ser paga, sabendo-se que s�o descontados 8% para pagamento de impostos e taxas devida*/
    setlocale(LC_ALL, "");
    int start;
    start = menu();

    float numDias, quantiaLiq;

    if (start == 1) {
        do {
            printf("Digite a quantidade de dias trabalhados: \n");
            scanf("%f", &numDias);
            if (numDias < 0) {
                printf("Valor inv�lido! \n\n");
            }
        } while (numDias < 0);

        quantiaLiq = (30 * numDias) - ((30 * numDias) * 8/100);

        printf("A quantia l�quida a ser paga � de R$%.2f", quantiaLiq);
    }
    return 0;
}
#endif // ex2

#ifdef ex3
int main()
{
    /* Uma empresa paga R$ 10,00 por hora normal trabalhada e R$ 15,00 por hora extra. Escreva um programa que leia o total de horas normais e o total de horas extras trabalhadas por um empregado em um ano e calcule o sal�rio anual deste trabalhador. */
    setlocale(LC_ALL, "");
    int start;
    start = menu();

    float horas, horasExtras, salario;

    if (start == 1) {
        do {
            printf("Digite o n�mero de horas trabalhadas: \n");
            scanf("%f", &horas);
            if (horas < 0) {
                printf("Digite apenas n�meros positivos! \n\n");
            }
        } while (horas < 0);
        do {
            printf("Digite o n�mero de horas extras trabalhadas: \n");
            scanf("%f", &horasExtras);
            if (horasExtras < 0) {
                printf("Digite apenas n�meros positivos! \n\n");
            }
        } while (horasExtras < 0);

        salario = (10 * horas) + (15 * horasExtras);

        printf("O seu sal�rio anual � de R$%.2f", salario);
    }
    return 0;
}
#endif // ex3

#ifdef ex4
int main()
{
    /*Assuma que o trabalhador do exerc�cio anterior deve pagar 10% de imposto se o seu sal�rio anual for menor ou igual a R$12.000,00. Caso o sal�rio seja maior que este valor o imposto devido � igual a 10% sobre R$12.000,00 mais 25% sobre o que passar de R$12.000,00. Escreva um programa que calcule o imposto devido pelo trabalhador. */
    setlocale(LC_ALL, "");
    int start;
    start = menu();

    float horas, horasExtras, salarioBruto, salarioLiq, diferenca, imposto;

    if (start == 1) {
        do {
            printf("Digite o n�mero de horas trabalhadas: \n");
            scanf("%f", &horas);
            if (horas < 0) {
                printf("Digite apenas n�meros positivos! \n\n");
            }
        } while (horas < 0);
        do {
            printf("Digite o n�mero de horas extras trabalhadas: \n");
            scanf("%f", &horasExtras);
            if (horasExtras < 0) {
                printf("Digite apenas n�meros positivos! \n\n");
            }
        } while (horasExtras < 0);
        salarioBruto = (10 * horas) + (15 * horasExtras);

        if (salarioBruto <= 12000) {
            salarioLiq = salarioBruto - (salarioBruto * 0.1);
            printf("O seu sal�rio l�quido ser� de R$%.2f", salarioLiq);
        }
        else {
            diferenca = salarioBruto - 12000;
            salarioLiq = salarioBruto - (12000 * 0.1) - (diferenca * 0.25);
            printf("O seu sal�rio l�quido sera de R$%.2f", salarioLiq);
        }
    }
    return 0;
}
#endif // ex4

#ifdef ex5
int main()
{
    /* Leia uma dist�ncia em quil�metros e a quantidade de litros de gasolina consumidos por um carro em um percurso, calcule o consumo em km/l e escreva uma mensagem de acordo com a tabela 3.2
Consumo km/l	Mensagem
< 8		Venda o carro!
8 < x < 14	Econ�mico
x > 14		Super econ�mico */
    setlocale(LC_ALL, "");
    int start;
    start = menu();

    float km, litros, razao;

    if (start == 1) {
        do {
            printf("Digite a dist�ncia em quil�metros percorridos pelo carro: \n");
            scanf("%f", &km);
            if (km < 0) {
                printf("Digite apenas n�meros positivos! \n\n");
            }
        } while (km < 0);
        do {
            printf("Digite a quantidade de litros de gasolina consumidos pelo carro neste percurso: \n");
            scanf("%f", &litros);
            if (litros < 0) {
                printf("Digite apenas n�meros positivos! \n\n");
            }
        } while (litros < 0);

        razao = km / litros;

        if (razao < 8) {
            printf("Venda o carro! \n");
        }
        else if (razao < 14) {
            printf("Econ�mico! \n");
        }
        else {
            printf("Super econ�mico! \n");
        }
    }
    return 0;
}
#endif // ex5

#ifdef ex6
int main()
{
    /* Leia a nota e o n�mero de faltas de um aluno e escreva seu conceito de acordo com a tabela 3.3
Nota		Conceito
            20	>20
9 - 10		A	B
7,5 - 8,9	B	C
5 - 7,4		C	D
4 - 4,9		D	E
0 - 3,9		E	E */
    setlocale(LC_ALL, "");
    int start;

    int falta;
    float nota;
    char conceito;

    start = menu();
    if (start == 1) {
        do {
            printf("Digite as sua nota: \n");
            scanf("%f", &nota);
            if (nota < 0 || nota > 10) {
                printf("Digite apenas n�meros positivos! \n\n");
            }
        } while (nota < 0 || nota > 10);
        do {
            printf("Digite o seu n�mero de faltas: \n");
            scanf("%d", &falta);
            if (falta < 0) {
                printf("Digite apenas n�meros positivos! \n\n");
            }
        } while (falta < 0);

        if (nota >= 9 && falta <= 20) {
            conceito = 'A';
            printf("Seu conceito foi %c", conceito);
        }
        else if (nota >= 9 && falta > 20) {
            conceito = 'B';
            printf("Seu conceito foi %c", conceito);
        }
        else if (nota >= 7.5 && falta <= 20) {
            conceito = 'B';
            printf("Seu conceito foi %c", conceito);
        }
        else if (nota >= 7.5 && falta > 20) {
            conceito = 'C';
            printf("Seu conceito foi %c", conceito);
        }
        else if (nota >= 5 && falta <= 20) {
            conceito = 'C';
            printf("Seu conceito foi %c", conceito);
        }
        else if (nota >= 5 && falta > 20) {
            conceito = 'D';
            printf("Seu conceito foi %c", conceito);
        }
        else if (nota >= 4 && falta < 20) {
            conceito = 'D';
            printf("Seu conceito foi %c", conceito);
        }
        else if (nota >= 4 && falta >= 20) {
            conceito = 'E';
            printf("Seu conceito foi %c", conceito);
        }
        else
            {
            conceito = 'E';
            printf("Seu conceito foi %c", conceito);
        }

    }
    return 0;
}
#endif // ex6

#ifdef ex7
int main()
{
    /* Leia a idade e o tempo de servi�o de um trabalhador e escreve se ele pode ou n�o se aposentar. As condi��es de aposentadoria s�o:
-Ter pelo menos 65 anos de idade
-Ter trabalhado por pelo menos 30 anos
-Ou ter pelo menos 60 anos e ter trabalhado pelo menos 25 anos */
    setlocale(LC_ALL, "");
    int start;

    int idade, tempo;

    start = menu();
    if (start == 1) {
        do {
            printf("Digite a sua idade: \n");
            scanf("%d", &idade);
            if (idade < 0) {
                printf("Digite um valor v�lido! \n");
            }
        } while (idade < 0);
        do {
            printf("Digite o tempo de servi�o: \n");
            scanf("%d", &tempo);
            if (tempo < 0) {
                printf("Digite um valor v�lido! \n");
            }
        } while (tempo < 0);

        if (idade == 60 && tempo >= 25) {
            printf("Voc� pode se aposentar! \n");
        }
        else if (idade >= 65) {
            printf("Voc� pode se aposentar! \n");
        }
        else if (tempo >= 30) {
            printf("Voc� pode se aposentar! \n");
        }
        else {
            printf("Voc� n�o pode se aposentar! \n");
        }
    }
    return 0;
}
#endif // ex7

#ifdef ex8
int main()
{
    /* Um certo produto ir� sofrer aumento de acordo com a tabela 3.4. Fa�a um programa que leia o valor atual, calcule e escreva o novo valor do produto. O programa tamb�m deve mostrar uma mensagem de acordo com a tabela 3.5.
Tabela 3.4: Percentuais para c�lculo de novos pre�os
Pre�o Atual	    Percentual de reajuste
At� R$50	    5%
50 - 100	    10%
> 100		    15%

Tabela 3.5: Mensagem a ser exibida com rela��o ao pre�o do produto
Pre�o reajustado	Mensagem
At� 80			    Barato
80 at� 120		    Normal
120 at� 200		    Caro
> 200			    Muito caro*/
    setlocale(LC_ALL, "");
    int start;
    float valor, valorAjustado;
    start = menu();
    if (start == 1) {
        do {
            printf("Digite o valor do produto: \n");
            scanf("%f", &valor);
            if (valor < 0) {
                printf("Digite um valor positivo!\n\n");
            }
        } while (valor < 0);

        if (valor <= 50) {
            valorAjustado = valor + (valor * 0.05);
        }
        else if (valor <= 100) {
            valorAjustado = valor + (valor * 0.1);
        }
        else {
            valorAjustado = valor + (valor * 0.15);
        }

        if (valorAjustado <= 80) {
            printf("O novo valor do produto � de %.2f, ou seja, est� barato\n", valorAjustado);
        }
        else if (valorAjustado <= 120) {
            printf("O novo valor do produto � de %.2f, ou seja, est� normal\n", valorAjustado);
        }
        else if (valorAjustado <= 200) {
            printf("O novo valor do produto � de %.2f, ou seja, est� caro\n", valorAjustado);
        }
        else {
            printf("O novo valor do produto � de %.2f, ou seja, est� muito caro\n", valorAjustado);
        }
    }
    return 0;
}
#endif // ex8

#ifdef ex9
int main()
{
    /* Ler um n�mero inteiro e maior que 0. Caso o n�mero fornecido seja negativo, escreva uma mensagem de erro e solicite nova tentativa. Fa�a at� cinco tentativas, se o usu�rio n�o fornecer um n�mero v�lido nestas tentativas, imprima uma mensagem de erro e finalize o programa. Caso o usu�rio tenha fornecido um valor v�lido, calcule o logaritmo natural do valor lido. */
    setlocale(LC_ALL, "");
    int start;
    int num, i;
    start = menu();
    if (start == 1) {
        for (i = 0; i <= 5; i++) {
            printf("Digite o n�mero: \n");
            scanf("%d", &num);
            if (num < 0) {
                printf("Insira apenas valores positivos! \n\n");
            }
            else {
                num = log(num);
                printf("%d", num);
                break;
            }
            if (i == 5) {
                printf("Erro! \n");
            }
        }
    }
    return 0;
}
#endif // ex1

#ifdef ex10
int main()
{
    /* Receba tr�s n�meros quaisquer e crie um menu contendo as seguintes op��es: soma, subtra��o, multiplica��o e divis�o. O usu�rio far� a sua escolha e ap�s exibir o resultado. O programa deve continuar executando at� que o usu�rio escolha a op��o de sair. */
    setlocale(LC_ALL, "");
    int start;

    float a,b,c;

    start = menu();
    if (start == 1) {

    }
    return 0;
}

float soma() {

}

float subtracao() {

}

float multiplicao() {

}

float divisao() {

}
#endif // ex10

#ifdef ex11
int main()
{
    /* Tabuada:

Leia um n�mero e imprima sua tabuada de multiplica��o. */
    setlocale(LC_ALL, "");
    int start;

    float a, b, c;

    start = menu();
    if (start == 1) {
        printf("Digite o n�mero para calcular sua tabuada: \n");
        scanf("%f", &a);
        printf("Qual o limite da tabuada desejada? \n");
        scanf("%f", &c);

        for (b = 1; b <= c; b++) {
            printf("%.2f * %.2f = %.2f\n", a, b, a*b);
        }
    }
    return 0;
}
#endif // ex11

#ifdef ex12
int main()
{
    /* Valida��o de Dados:

Leia um n�mero inteiro entre 1 e 10. Caso o n�mero esteja fora do intervalo, solicite novamente ao usu�rio at� que um valor v�lido seja informado*/
    setlocale(LC_ALL, "");
    int start;

    int a;

    start = menu();
    if (start == 1) {
        do {
            printf("Digite um n�mero inteiro entre 1 e 10: \n");
            scanf("%d", &a);
            if (a < 1 || a > 10) {
                printf("Digite apenas n�meros entre 1 e 10: \n\n");
            }
            else {
                printf("Valor v�lido! \n");
            }
        } while (a < 1 || a > 10);
    }
    return 0;
}
#endif // ex12

#ifdef ex13
int main()
{
    /* Soma de N�meros:

Leia n�meros inteiros at� que o usu�rio digite 0. Calcule e imprima a soma de todos os n�meros digitados. */
    setlocale(LC_ALL, "");
    int start;

    int num, soma;

    start = menu();
    if (start == 1) {
        do {
            printf("Digite zero caso queira encerrar o programa\nDigite um n�mero a ser somado: \n");
            scanf("%d", &num);
            if (num == 0) {
                printf("Programa encerrado! \n");
                break;
            }
            else {
                soma += num;
                printf("A soma final � %d\n\npra ", soma);
            }
        } while (num != 0);
    }
    return 0;
}
#endif // ex13

#ifdef ex14
int main()
{
    /* Fatorial:

Leia um n�mero inteiro e calcule seu fatorial. */
    setlocale(LC_ALL, "");
    int start;
    start = menu();
    if (start == 1) {

    }
    return 0;
}
#endif // ex14
