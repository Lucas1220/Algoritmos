//Lucas Leite de Mello
#include <stdio.h>

int menorNumero(int num1, int num2, int num3) {
    int menor = num1;

    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }

    return menor;
}

int main() {
    int num1, num2, num3, menor;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    menor = menorNumero(num1, num2, num3);

    printf("O menor numero: %d\n", menor);

    return 0;
}

