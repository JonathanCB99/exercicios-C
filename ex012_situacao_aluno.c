#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, media;
    printf("Primeira nota: ");
    fflush(stdin);
    scanf("%f", &n1);
    printf("Segunda nota: ");
    fflush(stdin);
    scanf("%f", &n2);
    media = (n1+n2)/2;
    printf("M�dia do aluno: %.1f", media);
    printf("\nA situa��o �: %s", (media>=7)?"Aprovado":"Reprovado");
}