#include <stdio.h>

int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    if (numero % 2 == 0) {
        printf("o numero é par.\n");
    } else {
        printf("o numero è impar.\n");
    }
    return 0;
}
