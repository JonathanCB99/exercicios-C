#include <stdio.h>
#include <locale.h>
#include <time.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int hora = data->tm_hour;
    float qntDin;
    int hFilme;
    printf("����** EX020 - D� para ver o filme? **����\n\n");
    printf("======== CINEMA ESTUDONAUTA ========\n\n");
    printf("Que horas come�a o filme? ");
    fflush(stdin);
    scanf("%i", &hFilme);
    printf("HOR�RIO DO FILME: %ih = PRE�O DO INGRESSO: R$20\n", hFilme);
    printf("------------------------------------------\n");
    printf("Quanto de dinheiro voc� tem? R$");
    fflush(stdin);
    scanf("%f",&qntDin);
    printf("Agora s�o %i horas", hora);
     if(qntDin < 20 || hora >= hFilme){
         printf("\nInfelizmente n�o � poss�vel comprar o ingresso!");

     } else {
         if (qntDin >= 20 && hora < hFilme) {
              printf("\nVoc� consegue comprar o ingresso!");
         }
     }
}