#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    int num, desl;
    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%i", &num);
    printf("Digite o deslocamento: ");
    fflush(stdin);
    scanf("%i", &desl);
    printf("\nCalculando %i >> %i � igual a %i", num, desl, (num>>desl));
    printf("\nCalculando %i << %i � igual a %i",num, desl, (num<<desl));
}