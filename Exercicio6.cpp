#include <stdio.h>
#include <locale.h>

// Lucas Leite de Mello
int maior(int a, int b);

int main() {
	setlocale(LC_ALL, "Portuguese");
    int num1, num2, resultado;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    resultado = maior(num1, num2);

    printf("O maior numero entre %d e %d: %d\n", num1, num2, resultado);

    return 0;
}

int maior(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

