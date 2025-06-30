#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dados {
    char nomeMusica[50];
    char nomeAutor[50];
    float preco;
    int estoque;
};

void entrada(struct dados *p_musicas) {
    setlocale(LC_ALL, "");
    system("cls");
    printf("\n--------------------- CADASTRO ---------------------\n\n");

    printf("Nome da M�sica: ");
    scanf(" %[^\n]", p_musicas->nomeMusica);

    printf("Nome do Autor: ");
    scanf(" %[^\n]", p_musicas->nomeAutor);

    printf("Quantidade dispon�vel no estoque: ");
    scanf("%d", &p_musicas->estoque);

    printf("Pre�o: ");
    scanf("%f", &p_musicas->preco);

    FILE *file = fopen("musicasCadastradas.txt", "a");

    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    } else {
        fwrite(p_musicas, sizeof(struct dados), 1, file);
        fclose(file);
    }

    printf("\nParab�ns! M�sica cadastrada com sucesso!\n");
    system("pause");
}

void lista(struct dados *p_musicas) {
    setlocale(LC_ALL,"");
    system("cls");

    FILE *file=fopen("musicasCadastradas.txt", "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        system("pause");
        return;
    }
    printf("------------ M�SICAS ------------\n");
    while(1) {
        int ver= fread(p_musicas, sizeof(*p_musicas), 1, file);
        if(ver==0)
            break;

        if(p_musicas->nomeMusica[0]!='*') {
            printf("Nome da m�sica: %s\n",p_musicas->nomeMusica);
            printf("Autor da M�sica %s\n",p_musicas->nomeAutor);
            printf("Quantidade: %d\n",p_musicas->estoque);
            printf("Pre�o: %.2f\n",p_musicas->preco);
            printf("\n");
        }
    }
    system("pause");
    fclose(file);
}

int pesquisaNome(struct dados *p_musicas) {
    char nome[51];
    int achado=0;
    int cont=0;
    system("cls");
    printf("Digite o nome completo da mu�sica:\n");
    gets(nome);

    FILE *file = fopen("musicasCadastradas.txt", "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        system("pause");
        return -1;
    }

    while (1) {
        int ver= fread(p_musicas, sizeof(*p_musicas), 1, file);
        if(ver==0)
            break;
        int i=0, mesma=1;

        while (nome[i] !='\0' && p_musicas->nomeMusica[i] !='\0') {
            if (nome[i] !=p_musicas->nomeMusica[i]) {
                mesma=0;
                break;
            }
            i++;
        }

        if (mesma && nome[i]=='\0' && p_musicas->nomeMusica[i]=='\0') {
            printf("\n------ M�SICA LOCALIZADA ------\n");
            printf("Nome da m�sica: %s\n", p_musicas->nomeMusica);
            printf("Nome do Autor: %s\n", p_musicas->nomeAutor);
            printf("Quantidade em estoque: %d\n", p_musicas->estoque);
            printf("Pre�o: %.2f\n\n", p_musicas->preco);
            system("pause");
            achado=1;
            break;
        }
        cont++;
    }

    fclose(file);
    if (!achado) {
        printf("M�sica n�o encontrada!\n");
        system("pause");
        return -1;
    } else {
        return cont;
    }
}

void AlteraEstoque(struct dados *p_musicas) {
    system("cls");
    FILE *file;
    int alterar = pesquisaNome(p_musicas);
    if (alterar == -1) {
        return;
    }

    file = fopen("musicasCadastradas.txt", "r+b");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        system("pause");
        return;
    }

    alterar = alterar * sizeof(struct dados);
    fseek(file, alterar, 0);
    fread(p_musicas, sizeof(struct dados), 1, file);

    int quant;
    printf("Digite a quantidade nova:\n");
    scanf("%d", &quant);
    p_musicas->estoque += quant;

    fseek(file, alterar, 0);
    fwrite(p_musicas, sizeof(struct dados), 1, file);

    fclose(file);
    printf("Estoque alterado com sucesso!\n\n");
    system("pause");
}

void PesquisaAutor(struct dados *p_musicas) {
    char letra;
    int achado = 0;
    system("cls");
    printf("Digite a inicial do autor:\n");
    scanf(" %c", &letra);

    FILE *file = fopen("musicasCadastradas.txt", "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        system("pause");
        return;
    }

    while (1) {
        int ver = fread(p_musicas, sizeof(*p_musicas), 1, file);
        if (ver == 0)
            break;

        if (p_musicas->nomeAutor[0] == letra) {
            printf("\nNome da m�sica: %s\n",p_musicas->nomeMusica);
            printf("Autor da M�sica %s\n",p_musicas->nomeAutor);
            printf("Quantidade: %d\n",p_musicas->estoque);
            printf("Pre�o: %.2f\n\n",p_musicas->preco);
            achado = 1;
        }
    }

    if (!achado) {
        printf("Nenhum autor encontrado com a letra '%c'\n", letra);
    }
    system("pause");
    fclose(file);
}

void FaixaPreco(struct dados *p_musicas) {
    float min, max;
    int achado = 0;
    system("cls");
    printf("Digite o pre�o m�nimo:\n");
    scanf("%f", &min);
    printf("Digite o pre�o m�ximo:\n");
    scanf("%f", &max);

    FILE *file = fopen("musicasCadastradas.txt", "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        system("pause");
        return;
    }
    printf("\n");
    while (1) {
        int ver = fread(p_musicas, sizeof(*p_musicas), 1, file);
        if (ver == 0)
            break;

        if (p_musicas->preco >= min && p_musicas->preco <= max) {
            printf("Nome da m�sica: %s\n",p_musicas->nomeMusica);
            printf("Autor da M�sica %s\n",p_musicas->nomeAutor);
            printf("Quantidade: %d\n",p_musicas->estoque);
            printf("Pre�o: %.2f\n",p_musicas->preco);
            printf("\n");
            achado = 1;
        }
    }

    if (!achado) {
        printf("Nenhuma m�sica encontrada na faixa de pre�o especificada.\n");
    }
    system("pause");
    fclose(file);
}

void alteraPreco(struct dados *p_musicas) {
    system("cls");
    FILE *file;
    int alterar = pesquisaNome(p_musicas);
    if (alterar == -1) {
        return;
    }
    system("cls");
    file = fopen("musicasCadastradas.txt", "r+");
    alterar = alterar * sizeof(struct dados);
    fseek(file, alterar, 0);
    fread(p_musicas, sizeof(struct dados), 1, file);
    printf("Digite o novo pre�o:\n");
    scanf("%f", &p_musicas->preco);
    fseek(file, alterar, 0);
    fwrite(p_musicas, sizeof(struct dados), 1, file);
    printf("Pre�o alterado com sucesso!\n");
    fclose(file);
    system("pause");
}

void alteraDados(struct dados *p_musicas) {
    system("cls");
    FILE *file;
    int alterar = pesquisaNome(p_musicas);
    if (alterar == -1) {
        return;
    }
    system("cls");
    file = fopen("musicasCadastradas.txt", "r+");
    alterar = alterar * sizeof(struct dados);
    fseek(file, alterar, 0);
    fread(p_musicas, sizeof(struct dados), 1, file);
    printf("Digite o nome da nova m�sica:\n");
    scanf(" %[^\n]", p_musicas->nomeMusica);
    printf("Digite o autor da nova m�sica:\n");
    scanf(" %[^\n]", p_musicas->nomeAutor);
    printf("Digite o pre�o da nova m�sica:\n");
    scanf("%f", &p_musicas->preco);
    printf("Digite o estoque dessa m�sica:\n");
    scanf("%d", &p_musicas->estoque);
    fseek(file, alterar, 0);
    fwrite(p_musicas, sizeof(struct dados), 1, file);
    printf("Dados alterado com sucesso!\n");
    fclose(file);
    system("pause");
}

void excluir(struct dados *p_musicas) {
    system("cls");
    FILE *file;
    int alterar = pesquisaNome(p_musicas);
    if (alterar == -1) {
        return;
    }
    system("cls");
    file = fopen("musicasCadastradas.txt", "r+");
    alterar = alterar * sizeof(struct dados);
    fseek(file, alterar, 0);
    fread(p_musicas, sizeof(struct dados), 1, file);
    p_musicas->nomeMusica[0] = '*';
    fseek(file, alterar, 0);
    fwrite(p_musicas, sizeof(struct dados), 1, file);
    printf("M�sica exclu�da com sucesso!\n");
    fclose(file);
    system("pause");
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    struct dados musicas;
    struct dados *p_musicas = &musicas;
    int opcao;

    do {
        system("cls");
        printf("---------------- MENU ----------------\n");
        printf("1 - Cadastrar M�sicas \n");
        printf("2 - Listar todas as m�sicas\n");
        printf("3 - Pesquisar m�sica por nome completo\n");
        printf("4 - Pesquisar m�sica pelo autor\n");
        printf("5 - Listar m�sicas pelo pre�o\n");
        printf("6 - Alterar o estoque de uma m�sica\n");
        printf("7 - Alterar pre�o de uma m�sica\n");
        printf("8 - Alterar dados de uma m�sica\n");
        printf("9 - Excluir m�sica\n");
        printf("10 - Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);

        getchar();

        switch (opcao) {
            case 1:
                entrada(p_musicas);
                break;
            case 2:
                lista(p_musicas);
                break;
            case 3:
                pesquisaNome(p_musicas);
                break;
            case 4:
                PesquisaAutor(p_musicas);
                break;
            case 5:
                FaixaPreco(p_musicas);
                break;
            case 6:
                AlteraEstoque(p_musicas);
                break;
            case 7:
                alteraPreco(p_musicas);
                break;
            case 8:
                alteraDados(p_musicas);
                break;
            case 9:
                excluir(p_musicas);
                break;
            case 10:
                break;
            default:
                printf("Op��o inv�lida!\n");
                break;
        }
    } while (opcao != 10);
    printf("Finalizando o programa...\n");
}
