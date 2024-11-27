//Lucas Leite de Mello
#include <stdio.h>

void vMedia(float notas[], int tam) {
    float soma = 0;
    for (int i = 0; i < tam; i++) {
        soma += notas[i];
    }
    float media = soma / tam;
    printf("Media: %.2f\n", media);
    if (media >= 7.0) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
}

int main() {
    float notas[4];
    for (int i = 0; i < 4; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
    vMedia(notas, 4);
    return 0;
}

