#include <stdio.h>
int main (){
    int x = 25;
    int* y = &x;
    *y =  50*0.30;
    printf("Valor atual de x: %i\n", x);
    return 0;
}