#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// registro para cadastro dos livros
struct livros {
    int codigo, ano;
    char titulo[200], autor[80], area[50], editora[50];
};

int main() {
    setlocale(LC_ALL, "Portuguese");
    struct livros info[20];
    int i;
    int option;

    // Menu
    printf("-----------------------------------------\n");
    printf("      <<< CADASTRO DE LIVROS >>>\n");
    printf("-----------------------------------------\n\n");
    printf("Escolha uma op��o abaixo:\n");
    printf("1 - CADASTRAR LIVROS\n2 - IMPRIMIR INFORMA��ES DOS LIVROS\n3 - PESQUISAR LIVROS POR C�DIGOS\n4 - ORDENAR OS LIVROS POR ANO\n5 - SAIR DO PROGRAMA\n");
    scanf("%d", &option);

    while(option >=1 && option <= 5 || option < 1 || option > 5) {

        if (option == 1) {

           for (i = 0; i < 3; i++) {
              printf("Digite o c�digo do livro: ");
              fflush(stdin);
              scanf("%d", info[i].codigo);
              printf("\nDigite o t�tulo do livro: ");
              fflush(stdin);
              gets(info[i].titulo);
              printf("Digite o autor do livro: ");
              fflush(stdin);
              gets(info[i].autor);
              printf("Digite a �rea relacionada do livro: ");
              fflush(stdin);
              gets(info[i].area);
              printf("Digite o ano do livro: ");
              fflush(stdin);
              scanf("%d", &info[i].ano);
              printf("Digite a editora do livro: ");
              fflush(stdin);
              gets(info[i].editora);

            }

        } else if (option == 2) {
            for (i = 0; i < 2; i++) {
              system("cls");

              printf("\n\nLIVRO %d\n", i+1);
              printf("T�tulo: %s\n", info[i].titulo);
              printf("Autor: %s\n", info[i].autor);
              printf("�rea: %s\n", info[i].area);
              printf("Ano: %d\n", info[i].ano);
              printf("Editora: %s", info[i].editora);

            }
            system("pause");
            system("cls");
            // volta para o Menu
            main();
           

        } else if (option == 3) {
            printf("ok\n");
            system("pause");
            system("cls");
            // volta para o Menu
            main();


        } else if (option == 4) {
            printf("ok");
            system("pause");
            system("cls");
            main();
        } else if (option == 5) {
            exit(0);
        } else if (option < 1 || option > 5){
            printf("Op��o inv�lida!\n");
            system("pause");
            system("cls");
            main();
        }
    
    }
    return (0);

}