#include <stdio.h>

int main() {
    float valor, desconto, valorPagar;
    int opcao;
    float percentual;

    printf("=== Sistema de Calculo de Desconto ===\n\n");

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valor);

    printf("\nFormas de Pagamento disponiveis:\n");
    printf("1 - PIX (20%% de desconto)\n");
    printf("2 - Debito (15%% de desconto)\n");
    printf("3 - Credito (5%% de desconto)\n");

    printf("\nEscolha a forma de pagamento: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            percentual = 0.20;
            printf("\nSua forma de pagamento escolhida foi: PIX\n");
            break;

        case 2:
            percentual = 0.15;
            printf("\nSua forma de pagamento escolhida foi: Debito\n");
            break;

        case 3:
            percentual = 0.05;
            printf("\nSua forma de pagamento escolhida foi: Credito\n");
            break;

        default:
            printf("\nForma de pagamento invalida!\n");
            return 0;
    }

    desconto = valor * percentual;
    valorPagar = valor - desconto;

    printf("\n----- Resumo da Compra -----\n");
    printf("Valor da compra: R$ %.2f\n", valor);
    printf("Valor do desconto: R$ %.2f\n", desconto);
    printf("Valor a pagar: R$ %.2f\n", valorPagar);

    return 0;
}
