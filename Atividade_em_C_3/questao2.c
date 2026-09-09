#include <stdio.h>

int main() {
    char nota;

    printf("Digite a nota (A, B, C, D ou F): ");
    scanf(" %c", &nota);

    switch (nota) {
        case 'A':
            printf("Excelente");
            break;
        case 'B':
            printf("Bom");
            break;
        case 'C':
            printf("Razoavel");
            break;
        case 'D':
            printf("Ruim");
            break;
        case 'F':
            printf("Reprovado");
            break;
        default:
            printf("Nota invalida");
    }

    return 0;
}
