#include <stdio.h>

int main() {
    int arrayNotas[3];
    int i; // Declare i aqui, não fora do escopo da função

    // Use < em vez de > na condição do loop para iterar de 0 a 2
    for (i = 0; i < 3; i++) {
        printf("Informe a sua nota %d: ", i + 1); // i + 1 para exibir a nota correta
        scanf("%d", &arrayNotas[i]); // Use & para passar o endereço da variável
    }

    // Não existe arrayNomes no código, então removi essa linha

    // Mostrar as notas inseridas
    printf("Notas inseridas:\n");
    for (i = 0; i < 3; i++) {
        printf("Nota %d: %d\n", i + 1, arrayNotas[i]); // i + 1 para exibir a nota correta
    }

    return 0;
}
