#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX023 - Positivo ou Negativo");
    printf("\nMe diga um n�mero e eu te direi se � POSITIVO, NEGATIVO ou NULO.\n\n");
    float num;
    printf("Digite um n�mero: ");
    scanf("%f", &num);
    if (num < 0) {
        printf("O valor %.0f � NEGATIVO.", num);
    } else if (num > 0) printf("O valor %.0f � POSITIVO.", num);
      else printf("O valor %.0f � NULO.", num); 
    
    return 0;
}