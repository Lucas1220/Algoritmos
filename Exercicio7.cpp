#include <stdio.h>
#include <locale.h>

// Lucas Leite de Mello	
	

int somaVetor(int vetor[], int tamanho);

int main() {
	setlocale(LC_ALL, "Portuguese");
    int numeros[3];
    int resultado;

    for (int i = 0; i < 3; i++) {
        printf("Digite o %dº numero inteiro: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    resultado = somaVetor(numeros, 3);

    printf("A soma dos valores: %d\n", resultado);

    return 0;
}

int somaVetor(int vetor[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}

