#include <stdio.h>
#include <locale.h>
//Lucas Leite de Mello
int soma(int a, int b);

int main() {
	setlocale(LC_ALL, "Portuguese");
    int num1, num2, resultado;

    printf("Digite o primeiro n�mero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo n�mero inteiro: ");
    scanf("%d", &num2);

    resultado = soma(num1, num2);

    printf("A soma de %d e %d: %d\n", num1, num2, resultado);

    return 0;
}

int soma(int a, int b) {
    return a + b;
}

