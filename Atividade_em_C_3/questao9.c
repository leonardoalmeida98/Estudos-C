#include <stdio.h>

int main() {
    int opcao;

    printf("=== Sistema de Gestao de Transporte ===\n\n");

    printf("1 - Carro\n");
    printf("2 - Motocicleta\n");
    printf("3 - Van\n");
    printf("4 - Onibus\n");
    printf("5 - Caminhao\n");
    printf("6 - Encerrar\n");

    printf("\nDigite o codigo do tipo de veiculo: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nTipo de veiculo: Carro");
            printf("\nFinalidade: Transporte de passageiros em pequena quantidade.");
            break;

        case 2:
            printf("\nTipo de veiculo: Motocicleta");
            printf("\nFinalidade: Entregas rapidas e transporte de pequenas cargas.");
            break;

        case 3:
            printf("\nTipo de veiculo: Van");
            printf("\nFinalidade: Transporte de passageiros ou pequenas cargas.");
            break;

        case 4:
            printf("\nTipo de veiculo: Onibus");
            printf("\nFinalidade: Transporte coletivo de passageiros.");
            break;

        case 5:
            printf("\nTipo de veiculo: Caminhao");
            printf("\nFinalidade: Transporte de cargas.");
            break;

        case 6:
            printf("\nSistema encerrado. Obrigado!");
            break;

        default:
            printf("\nOpcao invalida. Codigo de veiculo inexistente.");
    }

    return 0;
}