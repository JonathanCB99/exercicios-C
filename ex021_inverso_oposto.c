#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguse");
    printf("<<<< EX021 - Inverso ou Oposto >>>>\n\n");
    int num;
    printf("Digite um n�mero: ");
    scanf("%d", &num);
     if (num < 0) {
         printf("O oposto de %i � %i", num, -num);
     } else {
         if (num > 0) {
             printf("O inverso de %i � %.2f ", num, (float)1/num);
         }
     }
}