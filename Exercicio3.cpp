#include <stdio.h>
#include <locale.h>
// Lucas Leite de Mello

int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("O %d-ésimo termo da serie de Fibonacci é: %d\n", n, fibonacci(n));
    return 0;
}

