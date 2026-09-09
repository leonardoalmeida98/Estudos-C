#include <stdio.h>

int main() {
    int opcao;

    printf("=== Sistema Inteligente de Direcionamento de Atendimento ===\n\n");

    printf("1 - Suporte Tecnico\n");
    printf("2 - Financeiro\n");
    printf("3 - Recursos Humanos\n");
    printf("4 - Comercial\n");
    printf("5 - Encerrar Atendimento\n");

    printf("\nDigite o codigo do setor desejado: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nVoce foi direcionado para o setor de Suporte Tecnico.");
            printf("\nAtendimento para problemas relacionados a sistemas, computadores, redes e ferramentas.");
            break;

        case 2:
            printf("\nVoce foi direcionado para o setor Financeiro.");
            printf("\nAtendimento para duvidas sobre pagamentos, cobrancas, contratos e faturamento.");
            break;

        case 3:
            printf("\nVoce foi direcionado para o setor de Recursos Humanos.");
            printf("\nAtendimento para assuntos relacionados a colaboradores, beneficios e documentos internos.");
            break;

        case 4:
            printf("\nVoce foi direcionado para o setor Comercial.");
            printf("\nAtendimento para propostas, vendas, clientes e negociacoes comerciais.");
            break;

        case 5:
            printf("\nAtendimento encerrado. Agradecemos o contato!");
            break;

        default:
            printf("\nOpcao invalida. Escolha um setor disponivel.");
    }

    return 0;
}
