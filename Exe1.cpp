//Lucas Leite de Mello
#include <stdio.h>

typedef struct {
    double peso;
    int idade;
    double altura;
} pessoa;

// Fun��o que exibe os dados da pessoa
void imprimePessoa(pessoa p) {
    printf("Peso: %.2lf. Idade: %d. Altura: %.2lf.\n\n", p.peso, p.idade, p.altura);
}

//Fun��o para preencher os dados da pessoa
void preencherPessoas(pessoa pessoas[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite o peso da pessoa %d: ", i + 1);
        scanf("%lf", &pessoas[i].peso);
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &pessoas[i].idade);
        printf("Digite a altura da pessoa %d: ", i + 1);
        scanf("%lf", &pessoas[i].altura);
    }
}

int main() {
    pessoa pessoas[5], p1;

    // Preenche o vetor 'pessoas' com dados inseridos
    preencherPessoas(pessoas, 5);

    p1 = pessoas[0];

    if (p1.idade > 20) 
        p1.idade++;

    pessoas[1] = pessoas[0];

    // Imprime os dados de cada pessoa no vetor
    imprimePessoa(p1);
    for (int i = 0; i < 5; i++) {
        imprimePessoa(pessoas[i]);
    }

    return 0;
}

