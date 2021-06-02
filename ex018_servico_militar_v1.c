#include <stdio.h>
#include <locale.h>
#include <time.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    time_t t;
    time(&t);
    struct tm*data;
    data = localtime(&t);
    int anoAtual = data->tm_year + 1900;
    int anoNasc;
    printf("<<< EX018 - Servi�o Militar v1.0>>>\n\n");
    printf("Atualmente estamos no ano de %i \n", anoAtual);
    printf("Em que ano voc� nasceu? ");
    fflush(stdin);
    scanf("%d",&anoNasc);
    printf("\n----------------------");
    printf("\nSua idade atual � de %i anos.\n", anoAtual-anoNasc);
    if (anoAtual-anoNasc >= 18){
        printf("J� fez 18 anos. Espero que voc� tenha se alistado.");
    } else {
        if (anoAtual-anoNasc < 18){
            printf("Voc� ainda n�o tem 18 anos. N�o pode se alistar.");
        }
    }
}