#include <stdio.h>

int main(){

    printf("Hola mundo\n");

    int num = 2;

    int  *pint = &num;

    printf("Contenido del puntero %d\n", *pint);
    printf("Dirección de memoria almacenada por el puntero: %p\n", (void *)pint);
    printf("Dirección de memoria de la variable: %p\n", (void *)&num);
    printf("Dirección de memoria del puntero: %p\n", (void *)&pint);

    printf("Tamanho de memoria de num: %zu\n", sizeof(num));

    return 0;
}