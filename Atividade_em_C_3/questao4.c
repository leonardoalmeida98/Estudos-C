#include <stdio.h>

int main() {
    int opcao;

    printf("=== MENU BANCARIO ===\n");
    printf("1 - Saque\n");
    printf("2 - Deposito\n");
    printf("3 - Transferencia\n");
    printf("4 - Sair\n");

    printf("Digite uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Saque");
            break;
        case 2:
            printf("Deposito");
            break;
        case 3:
            printf("Transferencia");
            break;
        case 4:
            printf("Sair");
            break;
        default:
            printf("Opcao invalida");
    }

    return 0;
}
