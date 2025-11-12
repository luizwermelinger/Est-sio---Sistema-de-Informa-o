#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ""); // Suporte a acentuação

    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    printf("Digite sua altura:\n");
    scanf("%f", &altura);

    printf("Digite seu nome:\n");
    scanf(" %[^\n]", nome); // Lê o nome com espaços

    printf("Digite sua matrícula:\n");
    scanf("%d", &matricula);

    printf("\nNome do aluno: %s - Matrícula: %d\n", nome, matricula);
    printf("Idade: %d - Altura: %.2f\n", idade, altura);

    return 0;
}
