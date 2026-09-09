#include <stdio.h>

int main() {
    int categoria;

    printf("Digite um codigo de 1 a 5: ");
    scanf("%d", &categoria);

    switch (categoria) {
        case 1:
            printf("Frios e Laticinios");
            break;
        case 2:
            printf("Carnes e Peixes");
            break;
        case 3:
            printf("Hortifruti");
            break;
        case 4:
            printf("Padaria");
            break;
        case 5:
            printf("Bebidas");
            break;
        default:
            printf("Categoria invalida");
    }

    return 0;
}
