#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Vou pensar em um n�mero entre 1 e 5. Tente adivinhar!\n");
    srand(time(NULL));
    int nrdm = rand() % 5 + 1;  // gera um n�mero de 1 a 5
    printf("Qual � o seu palpite?\n");
    scanf("%d",&num);
    printf("Eu pensei no n�mero %d e voc� pensou no %d", nrdm, num);

}