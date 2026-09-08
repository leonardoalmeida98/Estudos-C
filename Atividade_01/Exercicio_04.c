#include <stdio.h>

int main() {
    float valorConta;
    float desconto;
    float valorFinal;

    printf("Digite o valor da conta: R$ ");
    scanf("%f", &valorConta);

    if (valorConta >= 500) {
        desconto = valorConta * 0.15;
    } else {
        desconto = valorConta * 0.05;
    }

    valorFinal = valorConta - desconto;

    printf("\n--- CUPOM FISCAL ---\n");
    printf("Valor original: R$ %.2f\n", valorConta);
    printf("Valor do desconto: R$ %.2f\n", desconto);
    printf("Valor com desconto: R$ %.2f\n", valorFinal);

    return 0;
}