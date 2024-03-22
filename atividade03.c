#include <stdio.h>
#include <malloc.h>
#define alturaMaxima 224

typedef struct{
    int peso; //Peso em quilogramas
    int altura; //Altura em centimetros
}PesoAltura;

int main(){
    PesoAltura* pessoa1 = (PesoAltura*) 
    malloc(sizeof(int));
    pessoa1->peso = 80;
    pessoa1->altura = 227;
    if(pessoa1->altura>alturaMaxima) printf("Altura acima da maxima.\n");
    else printf("Altura abaixo da maxima");
    return 0;
}