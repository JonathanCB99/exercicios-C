#include <stdio.h>
#include <locale.h>
#include <time.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    time_t t;
    time(&t);
    struct tm*data;
    data = localtime(&t);
    int anoAtual = data-> tm_year + 1900;
    int anoNasc, idade;

    printf("Em que ano voc� nasceu? ");
    fflush(stdin);
    scanf("%i", &anoNasc);
    idade = anoAtual - anoNasc;
    printf("\n---------------------\n");
    printf("Voc� tem %d anos\n", idade);
    printf("Seja bem vindo ao Banco Estudonauta!\n");
    if(idade >= 65){
        printf("=== ATEN��O! DIRIJA-SE A FILA PREFER�NCIAL ===\n");
    }
    printf("---------------------");
}