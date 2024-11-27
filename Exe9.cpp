//Lucas Leite de Mello
#include <stdio.h>
void multiplicarValores(int valores[], int tam) {
    int produto = 1;
    for (int i = 0; i < tam; i++) {
        produto *= valores[i];
    }
    printf("Resultado da multiplicacao: %d\n", produto);
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
    
    multiplicarValores(valores, n);
    return 0;
}

