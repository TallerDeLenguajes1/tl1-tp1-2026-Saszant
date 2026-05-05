#include <stdio.h>

int main(){
    int num = 666;
    int *pnum = &num;

    printf("Contenido del puntero: %d\n", *pnum);
    printf("Direccion de memoria almacenada por el puntero: %p\n", pnum);
    printf("Direccion de memoria de la variable: %p\n", &num);
    printf("Direccion de memoria del puntero: %p\n", &pnum);
    printf("Tamaño de memoria utilizado por la variable: %d\n", sizeof(num));

    printf("Hola mundo");
    return 0;
}