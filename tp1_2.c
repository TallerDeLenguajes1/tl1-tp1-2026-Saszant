#include <stdio.h>

int cuadradoValor(int a){
    return a*a;
}

void cuadradoRef(int *a){
    *a = (*a)*(*a);
}

void datosVar(int *a){
    printf("Direccion de la variable: %p", a);
    printf("Contenido de la variable: %d", *a);
}

void invertir(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b){
    int aux = *a;
    if(*a > *b){
        *a = *b;
        *b = aux;
    }
}

int main(){
    int num1, num2;
    
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);


    invertir(&num1, &num2);
    printf("Valores invertidos: num1 = %d, num2 = %d\n", num1, num2);


    return 0;
}