#include <stdio.h>

int main() {
    int opcao;

    printf("=== CARDAPIO ===\n\n");
    printf("1 - Hamburguer Artesanal - R$ 25,00\n");
    printf("2 - Pizza Calabresa - R$ 45,00\n");
    printf("3 - Prato Executivo - R$ 35,00\n");
    printf("4 - Refrigerante - R$ 8,00\n");
    printf("5 - Sobremesa - R$ 12,00\n");
    printf("6 - Encerrar Pedido\n");

    printf("\nDigite o codigo do produto: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nProduto: Hamburguer Artesanal");
            printf("\nValor: R$ 25,00");
            printf("\nPedido confirmado!");
            break;

        case 2:
            printf("\nProduto: Pizza Calabresa");
            printf("\nValor: R$ 45,00");
            printf("\nPedido confirmado!");
            break;

        case 3:
            printf("\nProduto: Prato Executivo");
            printf("\nValor: R$ 35,00");
            printf("\nPedido confirmado!");
            break;

        case 4:
            printf("\nProduto: Refrigerante");
            printf("\nValor: R$ 8,00");
            printf("\nPedido confirmado!");
            break;

        case 5:
            printf("\nProduto: Sobremesa");
            printf("\nValor: R$ 12,00");
            printf("\nPedido confirmado!");
            break;

        case 6:
            printf("\nPedido encerrado. Obrigado pela preferencia!");
            break;

        default:
            printf("\nOpcao invalida. Produto nao encontrado no cardapio.");
    }

    return 0;
}
