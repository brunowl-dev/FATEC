// Mudar o n�mero do exerc�cio na linha abaixo para conseguir rodar.
#define ex18
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

#ifdef ex1
int main()
{
    setlocale(LC_ALL, "");
    int num;

    printf("Digite seu n�mero! \n");
    scanf("%d", &num);

    printf("O antecessor do n�mero %d � %d, e seu sucessor � %d \n", num, num - 1, num + 1);
    return 0;
}
#endif // ex1

#ifdef ex2
int main ()
{
    setlocale(LC_ALL, "");
    float num, numeroReajuste;

    do {
        printf("Insira um n�mero: \n");
        scanf("%f", &num);

        if (num <= 0) {
            printf("Insira valores positivos! \n\n");
        }
    } while (num <= 0);

    numeroReajuste = num + (num * 0.1);
    printf("O seu n�mero com reajuste de 10% � %.2f", numeroReajuste);

    return 0;
}
#endif // ex2

#ifdef ex3
int main ()
{
    setlocale(LC_ALL, "");
    float preco, precoDesconto;

    do {
        printf("Insira o pre�o do produto: \n");
        scanf("%f", &preco);

        if (preco <= 0) {
            printf("Insira um n�mero positivo! \n\n");
        }
    } while (preco <= 0);

    precoDesconto = preco - (preco * 9/100);
    printf("O seu produto com desconto de 9% � %.2f", precoDesconto);

    return 0;
}
#endif // ex3

#ifdef ex4
int main ()
{
    /* C�lculo de um sal�rio l�quido de um professor. Ser�o fornecidos via teclado o valor da hora aula,  o n�mero de aulas dadas e o  desconto do INSS. */
    setlocale(LC_ALL, "");

    float horaAula, descontoINSS;
    int numAulas;

    do {
        printf("Insira o valor da hora aula: \n");
        scanf("%f", &horaAula);
        if (horaAula <= 0) {
            printf("Insira um valor positivo! \n\n");
        }
    } while (horaAula <= 0);

    do {
        printf("Insira a quantidade de aulas ministradas: \n");
        scanf("%d", &numAulas);
        if (numAulas <= 0) {
            printf("Insira um valor positivo! \n\n");
        }
    } while (numAulas <= 0);

    do {
        printf("Insira a porcentagem de desconto do INSS: \n");
        scanf("%f", &descontoINSS);
        if (descontoINSS <= 0 || descontoINSS > 100) {
            printf("Insira um valor positivo! \n\n");
        }
    } while (descontoINSS <= 0 || descontoINSS > 100);

    float salarioBruto = horaAula * numAulas;
    float salarioLiq = salarioBruto - (salarioBruto * descontoINSS/100);

    printf("O seu sal�rio l�quido � de %.2f", salarioLiq);


    return 0;
}
#endif // ex4

#ifdef ex5
int main ()
{
/* 5- O custo ao consumidor de um carro novo � a soma do pre�o da f�brica com o percentual de lucro do distribuidor e dos impostos aplicados ao pre�o de f�brica. Fa�a um programa que receba via teclado: O pre�o de f�brica de um ve�culo, o percentual de lucro do distribuidor e o percentual de impostos. Calcule e mostre:�
O valor correspondente ao lucro do distribuidor�
O valor correspondente aos impostos�
O pre�o final do ve�culo */

    setlocale(LC_ALL, "");
    float precoFabrica;
    float percentualImposto;
    float percentualLucro;

    do {
        printf("Insira o pre�o da f�brica: \n");
        scanf("%f", &precoFabrica);
        if (precoFabrica <= 0) {
            printf("Insira um n�mero positivo! \n\n");
        }
    } while (precoFabrica <= 0);

    do {
        printf("Insira o percentual de lucro desejado: \n");
        scanf("%f", &percentualLucro);
        if (percentualLucro <= 0 || percentualLucro > 100) {
            printf("Insira um n�mero v�lido! \n\n");
        }
    } while (percentualLucro <= 0 || percentualLucro > 100);

    do {
        printf("Insira o percentual de imposto: \n");
        scanf("%f", &percentualImposto);
        if (percentualImposto <= 0 || percentualImposto > 100) {
            printf("Insira um n�mero v�lido! \n\n");
        }
    } while (percentualImposto <= 0 || percentualImposto > 100);

    float custoFinal = precoFabrica + (precoFabrica * percentualLucro/100) + (precoFabrica * percentualImposto/100);
    float valorLucro = precoFabrica * percentualLucro/100;
    float valorImposto = precoFabrica * percentualImposto/100;

    printf("\nO valor de lucro do distribuidor � de %.2f, o valor dos impostos foram de %.2f \nO custo final para o consumidor � de %.2f", valorLucro, valorImposto, custoFinal);
    return 0;
}
#endif // ex5

#ifdef ex6
int main()
{
    setlocale(LC_ALL, "");
    /* 6- Elabore um programa que receba o sal�rio de um funcion�rio e calcule o reajuste desse sal�rio. Considere que o funcion�rio deve receber um reajuste de 15% caso seu sal�rio seja menor que 800 reais. Se o sal�rio for maior ou igual a 800 e menor ou igual a 1000, seu reajuste ser� de 10 %; caso seja maior que 1000, o reajuste deve ser de 5%. Ao final do programa deve apresentar o valor antigo e o novo sal�rio. */
    float salario, salarioAjuste;

    do {
        printf("Insira o seu sal�rio: \n");
        scanf("%f", &salario);
        if (salario <= 0) {
            printf("Insira um valor positivo! \n\n");
        }
    } while (salario <= 0);

    if (salario < 800) {
        salarioAjuste = salario + (salario * 0.15);
    }

    else{
        if (salario >= 800 && salario <= 1000){
            salarioAjuste = salario + (salario * 0.1);
            }
    }

    if (salario >= 1000) {
        salarioAjuste = salario + (salario * 0.05);
    }

    printf("Seu sal�rio antigo era de %.2f, seu sal�rio reajustado � de %.2f", salario, salarioAjuste);
    return 0;
}
#endif // ex6

#ifdef ex7
int main()
{
    setlocale(LC_ALL, "");
    /*Leia quatro valores referentes �s notas escolares de um aluno e exiba uma mensagem dizendo que ele foi aprovado se a m�dia for maior ou igual a 6. Caso contr�rio informe que ele est� reprovado. Apresente junto � mensagem o valor da m�dia obtida pelo aluno independente de ter sido aprovado ou n�o. As notas dever�o ser maiores ou iguais a zero e menores ou iguais a dez. */
    float nota1, nota2, nota3, nota4;

    do {
        printf("Insira a primeira nota: \n");
        scanf("%f", &nota1);
        if (nota1 < 0) {
            printf("Insira um valor positivo: \n");
        }
    } while (nota1 < 0);

    do {
        printf("Insira a segunda nota: \n");
        scanf("%f", &nota2);
        if (nota2 < 0) {
            printf("Insira um valor positivo: \n");
        }
    } while (nota2 < 0);

    do {
        printf("Insira a terceira nota: \n");
        scanf("%f", &nota3);
        if (nota3 < 0) {
            printf("Insira um valor positivo: \n");
        }
    } while (nota3 < 0);

    do {
        printf("Insira a quarta nota: \n");
        scanf("%f", &nota4);
        if (nota4 < 0) {
            printf("Insira um valor positivo: \n");
        }
    } while (nota4 < 0);

    float media = (nota1 + nota2 + nota3 + nota4) / 4;

    if (media >= 6) {
        printf("Sua m�dia foi de %.2f, logo, voc� foi APROVADO", media);
    }

    else {
        printf("Sua m�dia foi de %.2f, logo, voc� foi REPROVADO", media);
    }
    return 0;
}
#endif // ex7

#ifdef ex8
int main()
{
    setlocale(LC_ALL, "");
    /* Receba dois n�meros, o primeiro deve ser maior que 10 e menor que 25, o segundo deve ser maior ou igual a zero, o terceiro deve ser a soma dos dois primeiros e o quarto � o produto dos tr�s n�meros anteriores. Calcule e exiba a soma dos quadrados de cada um dos quatro n�meros. Caso o resultado seja menor que 50000, solicite novos dados.  */
    float num1, num2, num3, num4, soma;

    do {

        do {
            printf("Insira o primeiro n�mero: \n");
            scanf("%f", &num1);
            if (num1 < 10 || num1 >= 25) {
                printf("N�mero inv�lido! \n\n");
            }
        } while (num1 < 10 || num1 >= 25);

        do {
            printf("Insira o segundo n�mero: \n");
            scanf("%f", &num2);
            if (num2 < 0) {
                printf("N�mero inv�lido! \n\n");
            }
        } while (num2 < 0);

        num3 = num1 + num2;
        num4 = num1 * num2 * num3;

        soma = (num1 * num1) + (num2 * num2) + (num3 * num3) + (num4 * num4);

        if (soma < 50000) {
            printf("Valores inv�lidos! \nPor favor insira os n�meros novamente.\n\n");
        }
        else {
            printf("%.2f", soma);
        }

    } while (soma < 50000);



    return 0;
}
#endif // ex

#ifdef ex9
int main()
{
    setlocale(LC_ALL, "");
    /* Leia dois valores a e b e os escreve com a mensagem: "S�o m�ltiplos" ou "N�o s�o m�ltiplos".  */
    int a, b;

    printf("Insira o valor de a: \n");
    scanf("%d", &a);

    printf("Insira o valor de b: \n");
    scanf("%d", &b);

    if (a > b) {
        int c = a % b;
        if (c == 0) {
            printf("S�o m�ltiplos! \n");
        }
        else {
            printf("N�o s�o m�ltiplos! \n");
        }
    }
    else if(b > a) {
        int c = b % a;
        if (c == 0) {
            printf("S�o m�ltiplos! \n");
        }
        else {
            printf("N�o s�o m�ltiplos! \n");
        }
    }
    else {
        printf("S�o m�ltiplos! \n");
    }

    return 0;
}
#endif // ex9


#ifdef ex10
int main()
{
    setlocale(LC_ALL, "");
    /* Leia o pre�o de um produto e inflaciona esse pre�o em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100.  */
    float preco, precoNovo;

    do {
        printf("Insira o pre�o do produto: \n");
        scanf("%f", &preco);
        if (preco < 0); {
            printf("Insira um valor positivo! \n\n");
        }
    } while (preco < 0);

    if (preco >= 100) {
        precoNovo = preco + (preco * 0.2);
        printf("O seu pre�o inflacionado � %.2f", precoNovo);
    }

    else {
        precoNovo = preco + (preco * 0.1);
        printf("O seu pre�o inflacionado � %.2f", precoNovo);
    }
    return 0;
}
#endif // ex10

#ifdef ex11
int main()
{
    setlocale(LC_ALL, "");
    /* Leia dois n�meros inteiros e mostre o maior deles. */
    int a, b;
    printf("Insira o valor de a: \n");
    scanf("%d", &a);

    printf("Inisra o valor de b: \n");
    scanf("%d", &b);

    if (a > b) {
        printf("%d", a);
    }
    else {
        printf("%d", b);
    }

    return 0;
}
#endif // ex11

#ifdef ex12
int main()
{
    setlocale(LC_ALL, "");
    /* Leia o n�mero de identifica��o, as 3 notas obtidas por um aluno nas 3 verifica��es e a m�dia dos exerc�cios que fazem parte da avalia��o. Calcular a m�dia de aproveitamento, usando a f�rmula: MA = (Nota1 + Nota2 x 2 + Nota3 x 3 + ME)/7

A atribui��o de conceitos obedece a tabela abaixo:
M�dia de Aproveitamento
Conceito
9,0 A
7,5 e < 9,0 B
6,0 e < 7,5 C
4,0 e < 6,0 D
< 4,0 E
O algoritmo deve escrever o n�mero do aluno, suas notas, a m�dia dos exerc�cios, a m�dia de aproveitamento, o conceito correspondente e a mensagem: APROVADO se o conceito for A, B ou C e REPROVADO se o conceito for D ou E.  */

    int numId;
    char conceito;
    printf("Insira seu n�mero de identifica��o: \n");
    scanf("%d", &numId);

    float nota1, nota2, nota3, ME;

    do {
        printf("Insira a primeira nota: \n");
        scanf("%f", &nota1);
        if (nota1 < 0) {
            printf("Insira um valor positivo! \n\n");
        }
    } while (nota1 < 0);

    do {
        printf("Insira a segunda nota: \n");
        scanf("%f", &nota2);
        if (nota2 < 0) {
            printf("Insira um valor positivo! \n\n");
        }
    } while (nota2 < 0);

    do {
        printf("Insira a terceira nota: \n");
        scanf("%f", &nota3);
        if (nota3 < 0) {
            printf("Insira um valor positivo! \n\n");
        }
    } while (nota3 < 0);

    do {
        printf("Insira a media dos exerc�cios: \n");
        scanf("%f", &ME);
        if (ME < 0) {
            printf("Insira um valor positivo! \n\n");
        }
    } while (ME < 0);

    float MA = (nota1 + nota2 * 2 + nota3 * 3 + ME)/7;

    if (MA < 4) {
        conceito = 'E';
        printf("O seu n�mero de identifica��o � %d\nSuas notas foram %.2f, %.2f e %.2f, deixando sua m�dia de exerc�cios em %.2f\nOu seja, sua m�dia de aproveitamento foi de %.2f, seu conceito foi %c e voc� foi REPROVADO!\n", numId, nota1, nota2, nota3, ME, MA, conceito);
    }

    else if (4 <= MA && MA < 6) {
    conceito = 'D';
    printf("O seu n�mero de identifica��o � %d\nSuas notas foram %.2f, %.2f e %.2f, deixando sua m�dia de exerc�cios em %.2f\nOu seja, sua m�dia de aproveitamento foi de %.2f, seu conceito foi %c e voc� foi REPROVADO!\n", numId, nota1, nota2, nota3, ME, MA, conceito);
    }

    else if (6 <= MA && MA < 7.5) {
    conceito = 'C';
    printf("O seu n�mero de identifica��o � %d\nSuas notas foram %.2f, %.2f e %.2f, deixando sua m�dia de exerc�cios em %.2f\nOu seja, sua m�dia de aproveitamento foi de %.2f, seu conceito foi %c e voc� foi APROVADO, parab�ns!\n", numId, nota1, nota2, nota3, ME, MA, conceito);
    }

    else if (7.5 <= MA && MA < 9) {
    conceito = 'B';
    printf("O seu n�mero de identifica��o � %d\nSuas notas foram %.2f, %.2f e %.2f, deixando sua m�dia de exerc�cios em %.2f\nOu seja, sua m�dia de aproveitamento foi de %.2f, seu conceito foi %c e voc� foi APROVADO, parab�ns!\n", numId, nota1, nota2, nota3, ME, MA, conceito);
    }

    else {
        conceito = 'A';
        printf("O seu n�mero de identifica��o � %d\nSuas notas foram %.2f, %.2f e %.2f, deixando sua m�dia de exerc�cios em %.2f\nOu seja, sua m�dia de aproveitamento foi de %.2f, seu conceito foi %c e voc� foi APROVADO, parab�ns!\n", numId, nota1, nota2, nota3, ME, MA, conceito);
    }

    return 0;
}
#endif // ex12

#ifdef ex13
int main()
{
    setlocale(LC_ALL, "");
    /* Receba via teclado um n�mero inteiro qualquer e exiba se ele � positivo ou negativo ou zero.  */
    int num;

    printf("Insira o n�mero: \n");
    scanf("%d", &num);

    if (num == 0) {
        printf("O n�mero inserido � zero! \n");
    }

    else if (num > 0 && num != 0) {
        printf("O n�mero inserido � positivo! \n");
    }

    else{
        printf("O n�mero inserido � negativo! \n");
    }

    return 0;
}
#endif // ex13

#ifdef ex14
int main()
{
    setlocale(LC_ALL, "");
    /* Calcule a m�dia aritm�tica das quatro notas de um aluno e mostre, al�m do valor da m�dia, uma mensagem de "Aprovado", caso a m�dia seja igual ou superior a 6, ou a mensagem "reprovado", caso contr�rio. */
    float nota1, nota2, nota3, nota4;
    float media;

    do {
        printf("Insira a primeira nota: \n");
        scanf("%f", &nota1);
        if (nota1 > 10 || nota1 < 0) {
            printf("Insira uma nota v�lida! \n\n");
        }
    } while (nota1 > 10 || nota1 < 0);

    do {
        printf("Insira a segunda nota: \n");
        scanf("%f", &nota2);
        if (nota2 > 10 || nota2 < 0) {
            printf("Insira uma nota v�lida! \n\n");
        }
    } while (nota2 > 10 || nota2 < 0);

    do {
        printf("Insira a terceira nota: \n");
        scanf("%f", &nota3);
        if (nota3 > 10 || nota3 < 0) {
            printf("Insira uma nota v�lida! \n\n");
        }
    } while (nota3 > 10 || nota3 < 0);

    do {
        printf("Insira a quarta nota: \n");
        scanf("%f", &nota4);
        if (nota4 > 10 || nota4 < 0) {
            printf("Insira uma nota v�lida! \n\n");
        }
    } while (nota4 > 10 || nota4 < 0);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    if (media >= 6) {
        printf("Sua m�dia foi de %.2f, ou seja, voc� foi APROVADO. Parab�ns! \n", media);
    }
    else {
        printf("Sua m�dia foi de %.2f, ou seja, voc� foi REPROVADO. \n", media);
    }

    return 0;
}
#endif // ex14

#ifdef ex15
int main()
{
    setlocale(LC_ALL, "");
    /* Leia dois valores a e b e os escreve com a mensagem: "S�o m�ltiplos" ou "N�o s�o m�ltiplos". */

    // D�vida: Fazer com floats ou int?
    int a, b, c;

    printf("Insira o valor de a: \n");
    scanf("%d", &a);

    printf("Insira o valor de b: \n");
    scanf("%d", &b);

    if (a > b) {
        c = a % b;
        if (c == 0) {
            printf("S�o m�ltiplos! \n");
        }
        else {
            printf("N�o s�o m�ltiplos! \n");
        }
    }

    else {
        c = b % a;
        if (c == 0) {
            printf("S�o m�ltiplos! \n");
        }
        else {
            printf("N�o s�o m�ltiplos! \n");
        }
    }
    return 0;
}
#endif // ex15

#ifdef ex16
int main()
{
    setlocale(LC_ALL, "");
    /* Receba dois valores a e b e os escreve com a mensagem: "S�o pares " ou "S�o �mpares". */
    int a, b;

    printf("Insira o valor de a: \n");
    scanf("%d", &a);

    printf("Insira o valor de b: \n");
    scanf("%d", &b);

    int resto1 = a % 2;
    int resto2 = b % 2;

    if (resto1 == 0 && resto2 == 0) {
        printf("S�o pares! \n");
    }
    else {
        printf("S�o �mpares! \n");
    }

    return 0;
}
#endif // ex16

#ifdef ex17
int main()
{
    setlocale(LC_ALL, "");
    /* Leia dois n�meros inteiros e mostre o maior deles. Caso sejam iguais informe ao usu�rio */

    int a, b;

    printf("Insira o valor de a: \n");
    scanf("%d", &a);

    printf("Insira o valor de b: \n");
    scanf("%d", &b);

    if (a == b) {
        printf("S�o iguais! \n");
    }

    else if(a > b) {
        printf("%d", a);
    }

    else {
        printf("%d", b);
    }
    return 0;
}
#endif // ex17

#ifdef ex18
int main()
{
    setlocale(LC_ALL, "");
    /* Receba tr�s n�meros que garantam a exist�ncia de uma equa��o do 2� grau. Se houver ra�zes reais exiba-as, caso contr�rio informe ao usu�rio. */
    float a, b, c, pre_Delta, delta, x1, x2;

    do {
        do {
        printf("Insira o valor de a: \n");
        scanf("%f", &a);
        if (a == 0) {
            printf("O valor de a n�o pode ser igual a zero! Por favor insira um outro n�mero. \n\n");
        }
        } while (a == 0);

        printf("Insira o valor de b e c: \n");
        scanf("%f %f", &b, &c);

        printf("f", delta);

    } while (delta < 0);


    return 0;
}
#endif // ex18

#ifdef ex19
int main()
{
    setlocale(LC_ALL, "");
    /* A FATEC RUBENS LARA faz o pagamento de seus professores por hora/aula. Fa�a um algoritmo que calcule e exiba o sal�rio de um professor. Sabe-se que o valor da hora/aula segue a tabela abaixo: Professor N�vel 1 R$55,00 por hora/aula Professor N�vel 2 R$67,00 por hora/aula Professor N�vel 3 R$78,00 por hora/aula */

    int hora, aula;
    float nivel1 = 55;
    float nivel2 = 67;
    float nivel3 = 78;
    int horaTotal;
    int nivel;
    float salario;

    printf("Insira a quantidade de hora a cada aula: \n");
    scanf("%d", &hora);

    while (hora <= 0) {
        printf("Insira um valor v�lido! \n");
        scanf("%d", &hora);
    }

    printf("Insira a quantidade de aulas ministradas: \n");
    scanf("%d", &aula);

    while (aula <= 0) {
        printf("Insira um valor v�lido! \n");
        scanf("%d", &aula);
    }

    horaTotal = aula * hora;


    printf("Insira o n�vel (1, 2 ou 3): \n");
    scanf("%d", &nivel);

    if (nivel == 1) {
        salario = horaTotal * nivel1;
        printf("O seu sal�rio � de R$%.2f", salario);
    }

    if (nivel == 2) {
        salario = horaTotal * nivel2;
        printf("O seu sal�rio � de R$%.2f", salario);
    }

    if (nivel == 3) {
        salario = horaTotal * nivel3;
        printf("O seu sal�rio � de R$%.2f", salario);
    }

    return 0;
}
#endif // ex19

#ifdef ex20
int main()
{
    setlocale(LC_ALL, "");
    /* Escrever um algoritmo que leia tr�s n�meros quaisquer e informe qual � o maior e se eles forem todos igual informe ao usu�rio e solicite novos dados */

    float a, b, c;

    printf("Insira o valor de a: \n");
    scanf("%f", &a);

    printf("Insira o valor de b: \n");
    scanf("%f", &b);

    printf("Insira o valor de c: \n");
    scanf("%f", &c);

    if (a == b == c) {
        printf("S�o iguais! \n");
    }

    if (a > b && a > c) {
        printf("O maior n�mero � %.2f", a);
    }

    if (b > a && b > c) {
        printf("O maior n�mero � %.2f", b);
    }

    if (c > a && c > b) {
        printf("O maior n�mero � %.2f", c);
    }

    return 0;
}
#endif // ex20

#ifdef ex21
int main()
{
    setlocale(LC_ALL, "");
    /* Receba tr�s n�meros que representam os lados de um tri�ngulo e garantam a exist�ncia de um tri�ngulo. Informe ao usu�rio se o tri�ngulo � is�scele, equil�tero ou escaleno.

Observa��es:

a. Garantir que cada lado � menor que a soma dos outros dois lados.

b. O tri�ngulo � equil�tero quando todos os lados s�o iguais.

c. O tri�ngulo � is�scele quando apenas dois lados s�o iguais.

d. O tri�ngulo � escaleno quando todos os lados s�o diferentes. */

    float a, b, c;

    printf("Insira o valor de a: \n");
    scanf("%f", &a);

    printf("Insira o valor de b: \n");
    scanf("%f", &b);

    printf("Insira o valor de c: \n");
    scanf("%f", &c);

    while (a > b+c || b > a+c || c > a+b) {
        printf("\nInsira valores v�lidos, cada lado que tem que ser menor que a soma dos outros dois lados. \n");

        printf("Insira o valor de a: \n");
        scanf("%f", &a);

        printf("Insira o valor de b: \n");
        scanf("%f", &b);

        printf("Insira o valor de c: \n");
        scanf("%f", &c);
    }

    if (a == b && b == c) {
        printf("\nO tri�ngulo com a medida de lado informada � equil�tero! \n");
        return 0;
    }
    else {
        if (a != b && b != c) {
            printf("\nO tri�ngulo com a medida de lado informada � escaleno! \n");
            return 0;
        }
        else {
            printf("\nO tri�ngulo com a medida de lado informada � is�sceles!");
            return 0;
        }
    }
    return 0;
}
#endif // ex21

#ifdef ex22
int main()
{
    setlocale(LC_ALL, "");
    /* Fa�a um programa que receba o n�mero de horas trabalhadas e o valor do sal�rio m�nimo. Calcule e mostre o sal�rio a receber o seguindo as regras abaixo:
a) a hora trabalhada vale a metade do sal�rio min�mo;
b) o sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado pelo valor da hora trabalhada;
c) o imposto equivale a 3% do sal�rio bruto;
d) o sal�rio a receber equivale ao sal�rio bruto menos o imposto. */

    float valorSM, salarioBruto, imposto;
    int hora;

    printf("Insira o valor do sal�rio m�nimo: \n");
    scanf("%f", &valorSM);

    while (valorSM < 0) {
        printf("Insira um valor v�lido! \n");
        scanf("%f", &valorSM);
    }

    printf("Insira o n�mero de horas trabalhadas\n");
    scanf("%d", &hora);

    while (hora < 0) {
        printf("Insira um valor v�lido! \n");
        scanf("%d", &hora);
    }

    salarioBruto = ((0.5 * valorSM) * hora);
    imposto = (0.03 * salarioBruto);

    float salarioLiquido = salarioBruto - imposto;

    printf("\nO sal�rio a receber � de %.2f", salarioLiquido);

    return 0;
}
#endif // ex22

#ifdef ex23
int main()
{
    setlocale(LC_ALL, "");
    /* Cada degrau de uma escada tem X de altura. Fa�a um programa que receba essa altura e a altura que o usu�rio deseja subindo a escada. Calcule e mostre quantos degraus o usu�rio dever� subir para atingir seu objetivo, sem se preocupar com a altura do usu�rio. */

    float alturaDegrau, alturaDesejada;
    int quantDegraus;

    printf("Informe a altura de cada degrau da escada: \n");
    scanf("%f", &alturaDegrau);

    while (alturaDegrau < 0) {
        printf("Insira um valor v�lido! \n");
        scanf("%f", &alturaDegrau);
    }

    printf("Informe a altura desejada para alcan�ar: \n");
    scanf("%f", &alturaDesejada);

    while (alturaDesejada < 0) {
        printf("Insira um valor v�lido! \n");
        scanf("%f", &alturaDesejada);
    }

    quantDegraus = alturaDesejada / alturaDegrau;

    printf("Voc� precisar� subir %d degraus", quantDegraus);


    return 0;
}
#endif // ex23

#ifdef ex24
int main()
{
    setlocale(LC_ALL, "");
    /* O IMC � �ndice de Massa Corporal � um crit�rio da Organiza��o Mundial de Sa�de para dar uma indica��o sobre a condi��o de peso de uma pessoa adulta. A f�rmula � IMC = peso / (altura)�. Elabore um algoritmo que leia o peso e a altura de um adulto e mostre sua condi��o de acordo com as condi��es abaixo:

< 17 - Muito abaixo do peso
17 < x < 18,50 - Abaixo do peso
18,5 < x < 25 - Peso normal
25 < x < 30 - Acima do peso
30 < x < 35 - Obesidade 1
35 < x < 40 - Obesidade 2 (severa)
40 < x - Obesidade 3 (m�rbida) */

    float peso, altura, imc;

    printf("Insira o valor do seu peso: \n");
    scanf("%f", &peso);

    while (peso < 0) {
        printf("Insira um valor v�lido! \n");
        scanf("%f", &peso);
    }

    printf("Insira o valor da sua altura: \n");
    scanf("%f", &altura);

    while (altura < 0) {
        printf("Insira um valor v�lido! \n");
        scanf("%f", &altura);
    }

    imc = peso / (pow(altura, 2));

    if (imc <= 17) {
        printf("\nSeu imc � %.2f, ou seja, voc� est� muito abaixo do peso.\n", imc);
        return 0;
    }

    if (17 < imc && imc <= 18.50) {
    printf("\nSeu imc � %.2f, ou seja, voc� est� abaixo do peso.\n", imc);
    return 0;
    }

    if (18.50 < imc && imc <= 25) {
    printf("\nSeu imc � %.2f, ou seja, voc� no peso normal.\n", imc);
    return 0;
    }

    if (25 < imc && imc <= 30) {
    printf("\nSeu imc � %.2f, ou seja, voc� est� acima do peso.\n", imc);
    return 0;
    }

    if (30 < imc && imc <= 35) {
    printf("\nSeu imc � %.2f, ou seja, voc� se enquadra na obesidade 1.\n", imc);
    return 0;
    }

    if (35 < imc && imc <= 40) {
    printf("\nSeu imc � %.2f, ou seja, voc� se enquadra na obesidade 2.\n", imc);
    return 0;
    }

    if (40 < imc) {
    printf("\nSeu imc � %.2f, ou seja, voc� se enquadra na obesidade 3.\n", imc);
    return 0;
    }


    return 0;
}
#endif // ex24


#ifdef ex25
int main()
{
    setlocale(LC_ALL, "");
    /* Fa�a um programa que receba altura e o peso de uma pessoa. De acorda com a tabela e mostre qual a classifica��o dessa pessoa (de A at� I) */

    float altura, peso;

    printf("Insira o valor da sua altura \n");
    scanf("%f", &altura);

    while (altura < 0) {
        printf("Insira um valor v�lido! \n");
        scanf("%f", &altura);
    }

    printf("Insira o valor do seu peso: \n");
    scanf("%f", &peso);

    while (peso < 0) {
        printf("Insira um valor v�lido! \n");
        scanf("%f", &peso);
    }

    if (altura < 1.2 && peso <= 60) {
        printf("\nSua classifica��o � A! \n");
        return 0;
    }

    if (altura < 1.2 && 60 < peso && peso < 90) {
        printf("\nSua classifica��o � D! \n");
        return 0;
    }

    if (altura < 1.2 && 90 <= peso) {
        printf("\nSua classifica��o � G! \n");
        return 0;
    }

    if (1.2 <= altura && altura < 1.7 && peso <= 60) {
        printf("\nSua classifica��o � B! \n");
        return 0;
    }

    if (1.2 <= altura && altura < 1.7 && 60 < peso && peso < 90) {
        printf("\nSua classifica��o � E! \n");
        return 0;
    }

    if (1.2 <= altura && altura < 1.7 && 90 <= peso) {
        printf("\nSua classifica��o � H! \n");
        return 0;
    }

    if (1.7 <= altura && peso <= 60) {
        printf("\nSua classifica��o � C! \n");
        return 0;
    }

    if (1.7 <= altura && 60 < peso && peso < 90) {
        printf("\nSua classifica��o � F! \n");
        return 0;
    }

    if (1.7 <= altura && 90 <= peso) {
        printf("\nSua classifica��o � I! \n");
        return 0;
    }

    return 0;
}
#endif // ex25

#ifdef ex26
int main()
{
    setlocale(LC_ALL, "");
    /* . Fa�a um algoritmo que receba o a idade, o sexo (1 para masculino e 2 para feminino) e sal�rio fixo de um funcion�rio. Mostre o sexo, a idade e o sal�rio obtido ap�s o acr�scimo do abono: */

    int idade, sexo;
    float salario;

    printf("Insira a sua idade: \n");
    scanf("%d", &idade);

    while (idade < 0) {
        printf("Insira um valor v�lido! \n");
        scanf("%d", &idade);
    }

    printf("Insira o seu sexo (1 para masculino e 2 para feminino): \n");
    scanf("%d", &sexo);

    while (sexo < 0 || sexo > 2) {
        printf("Insira um valor v�lido! \n");
        scanf("%d", &sexo);
    }

    printf("Insira o valor do seu sal�rio: \n");
    scanf("%f", &salario);

    while (salario < 0 && salario == 0) {
        printf("Insira um valor v�lido! \n");
        scanf("%f", &salario);
    }

    if (sexo == 1 && idade >= 30) {
        salario = salario + 200;
        printf("\nSeu sexo � masculino, voc� tem %d anos de idade, e seu novo sal�rio com acr�scimo do abono � de R$%.2f", idade, salario);
        return 0;
    }

    if (sexo == 1 && idade < 30) {
        salario = salario + 120;
        printf("\nSeu sexo � masculino, voc� tem %d anos de idade, e seu novo sal�rio com acr�scimo do abono � de R$%.2f", idade, salario);
        return 0;
    }

    if (sexo == 2 && idade >= 30) {
        salario = salario + 220;
        printf("\nSeu sexo � feminino, voc� tem %d anos de idade, e seu novo sal�rio com acr�scimo do abono � de R$%.2f", idade, salario);
        return 0;
    }

    if (sexo == 2 && idade < 30) {
        salario = salario + 130;
        printf("\nSeu sexo � feminino, voc� tem %d anos de idade, e seu novo sal�rio com acr�scimo do abono � de R$%.2f", idade, salario);
        return 0;
    }



    return 0;
}
#endif // ex


