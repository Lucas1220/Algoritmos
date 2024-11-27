//Lucas Leite de Mello
#include <stdio.h>
#include <string.h>
#include <locale.h>

// Define a estrutura Carro com atributos modelo, ano e preco
typedef struct {
    char modelo[50];
    int ano;
    double preco;
} Carro;

// Função para modificar o preço de um carro
void modificarPreco(Carro *c, double novoPreco) {
    c->preco = novoPreco;  // Acessa o preço da estrutura Carro e atribui o novo preço
}

// Função que imprime os dados de um carro
void imprimirCarro(Carro *c) {
    printf("Modelo: %s\n", c->modelo);  // Imprime o modelo do carro
    printf("Ano: %d\n", c->ano);        // Imprime o ano do carro
    printf("Preço: R$ %.2lf\n", c->preco);  // Imprime o preço do carro
}

int main() {
    setlocale(LC_ALL, "portuguese");  // Define o idioma como português
    Carro carro1;  // Declara uma variável do tipo Carro

    // Atribui valores iniciais aos campos da estrutura Carro
    strcpy(carro1.modelo, "XYZ");
    carro1.ano = 2020;
    carro1.preco = 90000.00;

    // Imprime os dados do carro antes da modificação do preço
    printf("Dados antes da modificação:\n");
    imprimirCarro(&carro1);

    // Modifica o preço do carro usando a função modificarPreco
    modificarPreco(&carro1, 115000.00);

    // Imprime os dados do carro após a mudança do preço
    printf("\nDados após a modificação do preço:\n");
    imprimirCarro(&carro1);

    return 0;
}

