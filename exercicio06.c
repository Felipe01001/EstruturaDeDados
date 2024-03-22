#include <stdio.h>
#include <stdlib.h> // necessário para funções de alocação de memória

// Definição de estrutura de dados para representar um estudante
typedef struct {
    char nome[50];
    int idade;
    double *nota; // Alteramos para um ponteiro para alocar dinamicamente
    double media;
} Estudante;

int main() {
    int numEstudantes;

    printf("Digite o número de estudantes: ");
    scanf("%d", &numEstudantes);

    // Alocação dinâmica de memória para array de estudantes
    Estudante *estudantes = (Estudante*)malloc(numEstudantes * sizeof(Estudante));

    if (estudantes == NULL) {
        printf("Erro: memória insuficiente\n");
        return 1;
    }

    // Preenchendo os dados dos estudantes
    for (int i = 0; i < numEstudantes; i++) {
        printf("Digite o nome do estudante %d: ", i + 1);
        scanf("%s", estudantes[i].nome); // Usamos %s para ler uma string
        printf("Digite a idade do estudante %d: ", i + 1);
        scanf("%d", &estudantes[i].idade);

        // Alocamos memória para a matriz de notas
        estudantes[i].nota = (double*)malloc(3 * sizeof(double));

        printf("Informe as notas do estudante %d:\n", i + 1);
        double somaNotas = 0;
        for (int j = 0; j < 3; j++) {
            printf("Informe a nota %d: ", j + 1);
            scanf("%lf", &estudantes[i].nota[j]); // Usamos %lf para ler um double
            somaNotas += estudantes[i].nota[j];
        }
        estudantes[i].media = somaNotas / 3.0; // Calcula a média
    }

    // Imprimindo os dados dos estudantes
    printf("\nDados dos estudantes:\n");
    for (int i = 0; i < numEstudantes; i++) {
        printf("Estudante %d:\n", i + 1);
        printf("Nome: %s\n", estudantes[i].nome);
        printf("Idade: %d\n", estudantes[i].idade);
        printf("Média das notas: %.2f\n", estudantes[i].media); // %.2f para imprimir a média com 2 casas decimais

        // Liberamos a memória alocada para a matriz de notas
        free(estudantes[i].nota);
    }

    // Libera a memória alocada para o array de estudantes
    free(estudantes);

    return 0;
}

