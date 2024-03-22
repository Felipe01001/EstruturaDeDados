#include <stdio.h>

int main() {
   char nomes[5][50];
   double notas[5][2];
   double media[5];

   for (int i=0; i <2; i++){
    printf("Informe o nome do aluno %d ", i + 1);
    scanf("%s", nomes[i]);

    printf("Informe as duas notas do aluno %d:\n", i + 1);
    for (int j = 0; j <2; j++){
        printf("Nota %d ", j + 1);
        scanf("%lf", &notas[i][j]);
    }

    media[i] = (notas[i][0] + notas[i][1]) / 2.0;

   }
   printf("\nAlunos e suas médias:\n");
   for (int i = 0; i < 2; i++){
        printf("Aluno: %s, Média: %.2lf\n", nomes[i], media[i]);
   }
   return 0;

}
