#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    float vtotal;
    printf("Qual foi o valor total da compra? R$");
    fflush(stdin);
    scanf("%f", &vtotal);
    printf("------------------------------------\n");
    printf("Voc� comprou R$%.3f na nossa loja.\n", vtotal);
    printf("=============ATEN��O===============\n");
     if (vtotal >= 500 && vtotal < 1500){
         printf("Por fazer mais de R$500 em compras, voc� vai receber %.2f de desconto\n", vtotal*10/100);
         printf("O valor a ser pago � R$%.2f! Volte sempre!\n", vtotal - vtotal*10/100); // 10% desconto
     } else if (vtotal >= 1500) {
         printf("Por fazer mais de R$1500 em compras, voc� vai receber %.2f de desconto\n", vtotal*10/100);
         printf("O valor a ser pago � R$%.2f! Volte sempre!\n", vtotal - vtotal*15/100); // 15% desconto
         
     } else if (vtotal < 500) {
         printf("Voc� comprou %.2f na nossa loja.\nVolte Sempre!", vtotal);
     }
     printf("\n------------------------------------");

}