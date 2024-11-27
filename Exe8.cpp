//Lucas Leite de Mello
#include <stdio.h>

void exibirPares(int numero) {
    for (int i = 2; i <= numero; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    exibirPares(numero);
    return 0;
}

