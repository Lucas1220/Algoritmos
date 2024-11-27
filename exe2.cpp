//Lucas Leite de Mello
#include <stdio.h>

// Função que calcula a soma dos elementos de um vetor
int calcularResultado(int v[], int n);

int main() {
    int vetor[5], i, resultado;

    // Preenche o vetor com valores 
    for (i = 0; i < 5; i++) {
        vetor[i] = i * 2;  // Cada elemento do vetor é igual a i multiplicado por 2
    }

    // Chama a função calcularResultado para somar os elementos do vetor
    resultado = calcularResultado(vetor, 5);

    // Resultado da soma
    printf("O resultado é: %d\n", resultado);

    return 0;
}

// Função que calcula a soma dos elementos do vetor
int calcularResultado(int v[], int n) {
    int i, soma = 0;

    // Percorre o vetor e acumula a soma de seus elementos
    for (i = 0; i < n; i++) {
        soma += v[i];  // Adiciona o valor do elemento v[i] na variável soma
    }
    
    return soma;  // Retorna o valor total da soma
}

