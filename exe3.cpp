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

// Fun��o para modificar o pre�o de um carro
void modificarPreco(Carro *c, double novoPreco) {
    c->preco = novoPreco;  // Acessa o pre�o da estrutura Carro e atribui o novo pre�o
}

// Fun��o que imprime os dados de um carro
void imprimirCarro(Carro *c) {
    printf("Modelo: %s\n", c->modelo);  // Imprime o modelo do carro
    printf("Ano: %d\n", c->ano);        // Imprime o ano do carro
    printf("Pre�o: R$ %.2lf\n", c->preco);  // Imprime o pre�o do carro
}

int main() {
    setlocale(LC_ALL, "portuguese");  // Define o idioma como portugu�s
    Carro carro1;  // Declara uma vari�vel do tipo Carro

    // Atribui valores iniciais aos campos da estrutura Carro
    strcpy(carro1.modelo, "XYZ");
    carro1.ano = 2020;
    carro1.preco = 90000.00;

    // Imprime os dados do carro antes da modifica��o do pre�o
    printf("Dados antes da modifica��o:\n");
    imprimirCarro(&carro1);

    // Modifica o pre�o do carro usando a fun��o modificarPreco
    modificarPreco(&carro1, 115000.00);

    // Imprime os dados do carro ap�s a mudan�a do pre�o
    printf("\nDados ap�s a modifica��o do pre�o:\n");
    imprimirCarro(&carro1);

    return 0;
}

