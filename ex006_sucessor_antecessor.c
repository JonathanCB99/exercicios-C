#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int num, suces, antec;
    printf("Digite um n�mero para encontrar o sucessor e o antecessor: ");
    scanf("%d", &num);
    suces = num+1;
    antec = num-1;
    printf("\nO sucessor de %d � %d e seu antecessor � %d", num, suces, antec);  // ou (num+1), (num-1)
}