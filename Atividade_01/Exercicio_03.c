#include <stdio.h>

int main()
{
    float orcamento;
    printf("Qual seu orçamento para a viagem? ");
    scanf("%f", &orcamento);
    if (orcamento >= 10000) {
        printf("Voce pode viajar Dona Maria.\n");
    } else {
        printf("Voce está lisa dona maria.\n");
    }
    return 0;
}