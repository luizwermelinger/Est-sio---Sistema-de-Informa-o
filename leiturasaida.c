#include <stdio.h>

int main()
{

    int idade;
    float altura;
    char escolha;
    char nome[50];

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %f\n", altura);

    printf("Digite seu nome: ");
    scanf("%s", nome)
    printf("O nome é: %s\n", nome);

    printf("Digite sua escolha: ");
    scanf("%c", &escolha)
    printf("A escolha é: %c\n", escolha);
}
