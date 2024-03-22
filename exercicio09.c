#include <stdio.h>

int main() {
    int lista[5];
    int numProcurado;

    // Preenche a lista com 5 números fornecidos pelo usuário
    printf("Digite 5 números inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &lista[i]);
    }

    // Solicita ao usuário que insira o número a ser procurado
    printf("Digite o número que deseja procurar na lista: ");
    scanf("%d", &numProcurado);

    // Realiza a busca linear na lista
    int encontrado = 0;
    for (int i = 0; i < 5; i++) {
        if (lista[i] == numProcurado) {
            encontrado = 1;
            printf("O número %d foi encontrado na posição %d da lista.\n", numProcurado, i);
            break;
        }
    }

    if (!encontrado) {
        printf("O número %d não foi encontrado na lista.\n", numProcurado);
    }

    return 0;
}
