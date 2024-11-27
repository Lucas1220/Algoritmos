//Lucas Leite de Mello
#include <stdio.h>

void exibirImpares(int limite) {
    for (int i = 1; i <= limite; i++) {
        if (i % 2 != 0 && i % 7 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int numero;
    printf("Digite um número limite: ");
    scanf("%d", &numero);
    exibirImpares(numero);
    return 0;
}

