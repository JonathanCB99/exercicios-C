#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX026 - Qual � o seu estado? >>>\n\n");
    char estado[2];
    printf("Em qual estado voc� nasceu? ");
    fflush(stdin);
    gets(estado);
    if (estado == "SP") {
        printf("Voc� nasceu em %s, voc� � PAULISTANO.", estado);
    } else if(estado == "RJ"){
        printf("Voc� nasceu em %s, voc� � CARIOCA.", estado);
    } else if(estado == "MG"){
        printf("Voc� nasceu em %s, voc� � MINEIRO.", estado);
    } else if(estado == "BA"){
        printf("Voc� nasceu em %s, voc� � BAHIANO.", estado);
    } else if(estado == "PE"){
        printf("Voc� nasceu em %s, voc� � PERNAMBUCANO.", estado);
    } else if(estado == "CE"){
        printf("Voc� nasceu em %s, voc� � CEARENSE.", estado);
    } else {
        printf("Nascendo em %s voc� � natural da sua cidade, mas ainda n�o sei como te chamar!:(", estado);
    }

    return 0;
}