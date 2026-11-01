#include <stdio.h>

struct dados {
    int codigo;
    char nome[50];
    int idade;
    char sexo;
    float salario;
};

struct dados cliente[5];

void exibirClientes(struct dados lista[], int quantidade) {

    printf("\n===== CLIENTES CADASTRADOS =====\n");

    for (int i = 0; i < quantidade; i++) {

        printf("\n===== CLIENTE %d =====\n", i + 1);

        printf("Codigo: %d\n", lista[i].codigo);
        printf("Nome: %s\n", lista[i].nome);
        printf("Idade: %d anos\n", lista[i].idade);
        printf("Sexo: %c\n", lista[i].sexo);
        printf("Salario: R$ %.2f\n", lista[i].salario);
    }
}

int somarIdades(struct dados lista[], int quantidade) {

    int soma = 0;

    for (int i = 0; i < quantidade; i++) {
        soma = soma + lista[i].idade;
    }

    return soma;
}

int main(void) {

    printf("================================\n");
    printf("      CADASTRO DE CLIENTES      \n");
    printf("          APO - UNIPAR          \n");
    printf("================================\n");

    for (int i = 0; i < 5; i++) {

        printf("\n===== CADASTRO DO CLIENTE %d =====\n", i + 1);

        printf("Digite o codigo: ");
        scanf("%d", &cliente[i].codigo);

        printf("Digite o nome: ");
        scanf(" %49[^\n]", cliente[i].nome);

        printf("Digite a idade: ");
        scanf("%d", &cliente[i].idade);

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &cliente[i].sexo);

        printf("Digite o salario: ");
        scanf("%f", &cliente[i].salario);
    }

    exibirClientes(cliente, 5);

    int somaIdades = somarIdades(cliente, 5);

    float mediaIdades = somaIdades / 5.0f;

    printf("\n===== ESTATISTICAS DOS CLIENTES =====\n");
    printf("Soma das idades: %d\n", somaIdades);
    printf("Media das idades: %.2f anos\n", mediaIdades);

    return 0;
}