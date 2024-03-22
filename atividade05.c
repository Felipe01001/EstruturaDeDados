#include <stdio.h>

#define MAX 5
#define ERRO -1
#define true 1
#define false 0

typedef int TIPOCHAVE;

typedef struct {
    TIPOCHAVE chave;
} REGISTRO;

typedef struct {
    REGISTRO A[MAX + 1];
    int nroElem;
} LISTA;

void inicializarLista(LISTA *l) {
    l->nroElem = 0;
}

void ordenar(LISTA *l) {
    int i, j;
    REGISTRO temp;

    for (i = 0; i < l->nroElem - 1; i++) {
        for (j = 0; j < l->nroElem - i - 1; j++) {
            if (l->A[j].chave > l->A[j + 1].chave) {
                // Troca os elementos
                temp = l->A[j];
                l->A[j] = l->A[j + 1];
                l->A[j + 1] = temp;
            }
        }
    }
}

void inserirElemento(LISTA *l, TIPOCHAVE chave) {
    if (l->nroElem >= MAX) {
        printf("Erro: lista cheia\n");
        return;
    }

    l->A[l->nroElem].chave = chave;
    l->nroElem++;
}

void exibirLista(LISTA *l) {
    int i;
    for (i = 0; i < l->nroElem; i++) {
        printf("%d ", l->A[i].chave);
    }
    printf("\n");
}

int buscaSentinela(LISTA *l, TIPOCHAVE ch) {
    int i = 0;
    l->A[l->nroElem].chave = ch;
    while (l->A[i].chave != ch)
        i++;
    if (i == l->nroElem)
        return -1;
    else
        return i;
}

int main() {
    LISTA minhaLista;
    inicializarLista(&minhaLista);

    inserirElemento(&minhaLista, 198);
    inserirElemento(&minhaLista, 131);
    inserirElemento(&minhaLista, 554);
    inserirElemento(&minhaLista, 42);
    inserirElemento(&minhaLista, 230);

    ordenar(&minhaLista);
    printf("Lista ordenada:\n");
    exibirLista(&minhaLista);

    TIPOCHAVE chave;
    printf("Digite o número que deseja buscar na lista: ");
    scanf("%d", &chave);
    int posicao = buscaSentinela(&minhaLista, chave);
    if (posicao != -1)
        printf("O número %d foi encontrado na posição %d.\n", chave, posicao);
    else
        printf("O número %d não foi encontrado na lista.\n", chave);

    return 0;
}
