#include <stdio.h>

int main() {
    int idade, tempoEmpresa;

    printf("Digite a idade do funcionario: ");
    scanf("%d", &idade);

    printf("Digite o tempo de empresa em anos: ");
    scanf("%d", &tempoEmpresa);

    if (idade >= 18 && tempoEmpresa >= 1) {
        printf("Acesso autorizado.");
    } else {
        printf("Acesso nao autorizado.");
    }

    return 0;
}