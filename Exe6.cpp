//Lucas Leite de Mello
#include <stdio.h>

void calcular(int valores[], int tam) {
    int soma = 0;
    for (int i = 0; i < tam; i++) {
        soma += valores[i];
    }
    float media = (float)soma / tam;
    printf("Soma: %d\n", soma);
    printf("Media: %.2f\n", media);
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    
    int valores[n];
    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }
    
    calcular(valores, n);
    return 0;
}

