#include <stdio.h>
#include <locale.h>

void main() {
    int num, dobro;
    float terpt;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um n�mero: ");
    scanf("%i", &num);
    dobro = 2*num;
    terpt = (float)num/3; // (float)num para divis�o real
     printf("\nAnalisando o n�mero %d, seu dobro � %d e a ter�a parte � %.2f.", num, dobro, terpt);
}