#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");


    int idade = 25;
    float altura = 1.75;
    char escolha = 'L';
    char nome[35] = "Luiz Magno";

    printf("A idade do %s é: %d\n", nome, idade);
    printf("A altura é: %f\n", altura);
    printf("A escolha é: %c\n", escolha);


}

/*
    %d: Imprime um inteiro no formato decimal.
     
    %i: Equivalente a %d.
     
    %f: Imprime um número de ponto flutuante no formato padrão.
     
    %e: Imprime um número de ponto flutuante na notação científica.
     
    %c: Imprime um único caractere.
     
    %s: Imprime uma cadeia (string) de caracteres.

    \n: pular linha.
*/