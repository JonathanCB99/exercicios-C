#include <stdio.h>
#include <locale.h>
void main() {
    int num, mod;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%d", &num);
    printf("O n�mero digitado � %s", (num%2==0)?"PAR":"�MPAR");
}