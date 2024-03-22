#include <stdio.h>

#define MAX 50
#define ERRO -1
#define true 1
#define false 0

typedef int bool;
typedef int TIPOCHAVE;

typedef struct {
    TIPOCHAVE chave;
} REGISTRO;

typedef struct {
    REGISTRO A[MAX+1];
    int nroElem;
} LISTA;


void inicializarLista(LISTA* l) {
    l->nroElem = 0;
}

void exibirLista(LISTA* l) {
    int i;
    printf("Lista: \" ");
    for (i = 0; i < l->nroElem; i++)
        printf("%i ", l->A[i].chave);
    printf("\"\n");
}

bool inserirElemento(LISTA* l, TIPOCHAVE chave) {
    if (l->nroElem >= MAX) {
        printf("Erro: lista cheia\n");
        return false;
    }

    l->A[l->nroElem].chave = chave;
    l->nroElem++;
    return true;
}

void ordenar(LISTA* l) {
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
    
    return 0;
}