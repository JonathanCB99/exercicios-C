#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, media;
    printf("<<< EX015 - Bons alunos merecem parab�ns >>>\n");
    printf("Digite a sua primeira nota: ");
    fflush(stdin);
    scanf("%f", &nota1);
    printf("Digite a sua segunda nota: ");
    fflush(stdin);
    scanf("%f", &nota2);
    //media = (float)(nota1+nota2)/2;
     if(media >= 7){
         printf("-------------------------------------------\n");
         printf("PARB�NS! Sua m�dia final foi %.2f", media);
         printf("\n-------------------------------------------");
     } else {
         printf("Sua M�dia final foi %.2f",  (float)(nota1+nota2)/2);
     }
      
}