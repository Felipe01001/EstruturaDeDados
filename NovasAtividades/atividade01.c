#include <stdio.h>

int main() {
    int matriz1[3][3], matriz2[3][3], resultado[3][3];

    // Solicita ao usuário os números da primeira matriz
    printf("Informe os números da primeira matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    // Solicita ao usuário os números da segunda matriz
    printf("Informe os números da segunda matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Calcula a soma das duas matrizes e imprime o resultado
    printf("A soma das duas matrizes é:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
            printf("%d ", resultado[i][j]); // Adiciona um espaço após cada elemento
        }
        printf("\n"); // Quebra de linha após cada linha da matriz
    }

    return 0;
}
