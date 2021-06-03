#include <stdio.h>
#include <locale.h>
#include <time.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int anoAtual = data->tm_year + 1900;
    int anoNasc;
    printf("<<< EX025 - Servi�o Militar v2.0 >>>\n\n");
    printf("Atualmente estamos no ano %i.", anoAtual);
    printf("\nEm que ano voc� nasceu? ");
    fflush(stdin);
    scanf("%i", &anoNasc);
    printf("\n----------------------------------");
    if (anoAtual-anoNasc > 18){
        printf("\nSua idade atual � de %i anos.", anoAtual-anoNasc);
        printf("\nSeu alistamento foi em %i. J� se passaram %i anos.", anoNasc+18, anoAtual-(anoNasc+18));
    } else if (anoAtual-anoNasc < 18) {
        printf("\nSua idade atual � de %i anos.", anoAtual-anoNasc);
        printf("\nSeu alistamento � daqui a %i anos.", (anoNasc+18)-anoAtual);
    } else {
        printf("\nSua idade atual � de %i anos.", anoAtual-anoNasc);
        printf("\nVoc� completa 18 anos exatamente em %i v� se alistar.", anoNasc+18);
    }
    
    printf("\n----------------------------------");

}