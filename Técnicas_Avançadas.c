// Ponteiros (Pointers)

#include <stdlib.h>

int main()
{

    int x = 10;
    int *p = &x;
    printf("%d\n", *p); // imprime 10
}

// Alocação Dinâmica
#include <stdlib.h>

int main()
{

    int *arr = malloc(5 * sizeof(int));
    arr[0] = 100;
    free(arr);
}

// Structs + Ponteiros

#include <stdlib.h>

int main()
{

    typedef struct
    {
        char nome[20];
        int idade;
    } Pessoa;

    Pessoa *p = malloc(sizeof(Pessoa));
    strcpy(p->nome, "João");
    p->idade = 30;
    free(p);
}

// Funções com Ponteiros (passagem por referência)

#include <stdlib.h>

int main()
{

    void dobrar(int *n)
    {
        *n *= 2;
    }
}

// Arrays Multidimensionais

#include <stdlib.h>

int main()
{

    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
}

// Manipulação de Arquivos

#include <stdlib.h>

int main()
{

    FILE *f = fopen("dados.txt", "w");
    fprintf(f, "Texto");
    fclose(f);
}

// Recursão

#include <stdlib.h>

int main()
{

    int fatorial(int n)
    {
        if (n == 0)
            return 1;
        return n * fatorial(n - 1);
    }
}

// Macros e Pré-processador

#include <stdlib.h>

int main()
{

#define PI 3.1415
#define QUADRADO(x) ((x) * (x))
}

// Enumerações

#include <stdlib.h>

int main()
{

    enum Dia
    {
        DOM,
        SEG,
        TER
    };
}

// Ponteiros (continuação)

#include <stdio.h>

main() {}
void mostraValor(int *ptr)
{
    printf("Valor: %d\n", *ptr);
}

int main()
{
    int a = 20;
    mostraValor(&a);
    return 0;
}

// Alocação Dinâmica com verificação

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor = malloc(10 * sizeof(int));
    if (vetor == NULL)
    {
        printf("Erro ao alocar memória.\n");
        return 1;
    }
    for (int i = 0; i < 10; i++)
        vetor[i] = i * 2;
    for (int i = 0; i < 10; i++)
        printf("%d ", vetor[i]);
    free(vetor);
    return 0;
}

// Struct com ponteiro

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[50];
    int idade;
} Pessoa;

int main()
{
    Pessoa *p = malloc(sizeof(Pessoa));
    strcpy(p->nome, "Ana");
    p->idade = 28;
    printf("%s tem %d anos.\n", p->nome, p->idade);
    free(p);
    return 0;
}

// Passagem por referência

#include <stdio.h>

main() {}
void trocar(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 5, y = 10;
    trocar(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}

// Matriz

#include <stdio.h>

int main()
{
    int m[2][2] = {{1, 2}, {3, 4}};
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            printf("m[%d][%d] = %d\n", i, j, m[i][j]);
    return 0;
}

// Arquivo - gravação e leitura

#include <stdio.h>

int main()
{
    FILE *f = fopen("exemplo.txt", "w");
    fprintf(f, "Olá, mundo!\n");
    fclose(f);

    f = fopen("exemplo.txt", "r");
    char linha[100];
    fgets(linha, sizeof(linha), f);
    printf("Conteúdo: %s", linha);
    fclose(f);
    return 0;
}

// Recursão (fatorial)

#include <stdio.h>

int fatorial(int n)
{
    if (n <= 1)
        return 1;
    return n * fatorial(n - 1);
}

int main()
{
    printf("5! = %d\n", fatorial(5));
    return 0;
}

// Macros

#include <stdio.h>

#define QUADRADO(x) ((x) * (x))

int main()
{
    printf("Quadrado de 5: %d\n", QUADRADO(5));
    return 0;
}

// Enumeração

#include <stdio.h>

enum Dia
{
    DOM,
    SEG,
    TER,
    QUA,
    QUI,
    SEX,
    SAB
};

int main()
{
    enum Dia hoje = SEX;
    printf("Hoje é dia: %d\n", hoje);
    return 0;
}

// Modularização (simples)

#ifndef PESSOA_H
#define PESSOA_H

typedef struct
{
    char nome[50];
    int idade;
} Pessoa;
void mostrar(Pessoa p);

#endif

//*arquivo: pessoa.c*

#include <stdio.h>

void mostrar(Pessoa p)
{
    printf("Nome: %s\nIdade: %d\n", p.nome, p.idade);
}

//*arquivo: main.c*

#include <string.h>

int main()
{
    Pessoa p;
    strcpy(p.nome, "Lucas");
    p.idade = 30;
    mostrar(p);
    return 0;
}
