#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    printf("Me diga dois n�meros e eu colocarei os dois em ordem crescente.\n\n");
    int n1, n2;
    printf("Primero n�mero: ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("\nSegundo n�mero: ");
    fflush(stdin);
    scanf("%i", &n2);
    if (n1<n2){
        printf("Os n�meros em ordem s�o %i e %i", n1, n2);
    } else if (n1>n2){
        printf("Os n�meros em ordem s�o %i e %i", n2, n1);
    }

    return 0;
}