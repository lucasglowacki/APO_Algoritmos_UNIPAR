#include <stdio.h>

struct dados {
    int codigo;
    char nome[50];
    int idade;
    char sexo;
    float salario;
};

struct dados cliente[5];

int main(void) {

    printf("================================\n");
    printf("      CADASTRO DE CLIENTES      \n");
    printf("          APO - UNIPAR          \n");
    printf("================================\n");

    printf("\nDigite o codigo do primeiro cliente: ");
    scanf("%d", &cliente[0].codigo);

    printf("Codigo cadastrado: %d\n", cliente[0].codigo);
    printf("Codigo cadastrado: %d\n", cliente[0].codigo);

    return 0;
}