#include <stdio.h>
#include <locale.h>

void main() {
    int num, dobro;
    float terpt;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um n�mero: ");
    scanf("%d", &num);
    dobro = 2*num;
    terpt = num/3;
    printf("\nAnalisando o n�mero %d, seu dobro � %d e a ter�a parte � %.1f.", num, dobro, terpt);
}