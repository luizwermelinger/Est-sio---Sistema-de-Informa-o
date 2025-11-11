#include <stdio.h>

int main() {
    int idade;
    float altura;
    char nome[99];
    char escolha;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %.2f\n", altura); // opcional: mostrar com 2 casas decimais

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("O nome é: %s\n", nome);

    // Limpar o buffer antes de ler o caractere
    getchar();

    printf("Digite sua escolha (apenas 1 caractere): ");
    scanf("%c", &escolha);
    printf("A escolha é: %c\n", escolha);

    return 0;
}

