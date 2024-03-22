#include <stdio.h>

typedef struct aux {
    int cpf;
    int idade;
    struct aux* conjugue;
}PESSOA;

int main(){
    PESSOA pessoa1;
    PESSOA pessoa2;

    pessoa1.cpf = 3100000000;
    pessoa1.idade = 36;

    pessoa2.cpf = 178815167;
    pessoa2.idade = 24;

    pessoa1.conjugue = &pessoa2;
    pessoa2.conjugue = &pessoa1;
}