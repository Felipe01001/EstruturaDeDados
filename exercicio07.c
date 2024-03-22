#include <stdio.h>

int main() {
    int lista[10];
    int contador = 0;

    // Preenche a lista com os primeiros 10 números pares
    for (int i = 2; contador < 10; i += 2) {
        lista[contador] = i;
        contador++;
    }

    // Imprime a lista
    printf("Lista dos primeiros 10 números pares:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");

    return 0;
}
