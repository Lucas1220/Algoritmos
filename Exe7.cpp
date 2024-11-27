//Lucas Leite de Mello
#include <stdio.h>

void encontrarMaior(int valores[], int tam) {
    int maior = valores[0];
    int posicao = 0;
    for (int i = 1; i < tam; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
            posicao = i;
        }
    }
    printf("Maior valor: %d, Posicao: %d\n", maior, posicao);
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
    
    encontrarMaior(valores, n);
    return 0;
}

