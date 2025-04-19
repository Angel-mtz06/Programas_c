#include <stdio.h>
int main () {
    int num1 = 42;
    int *apuntador = &num1;
    printf("El valor de num1 es: %d\n", num1);
    printf("La direccion de num1 es: %p\n", &num1);
    printf("El valor de apuntador es: %p\n", apuntador);
    printf("El valor al que apunta apuntador es: %d\n", *apuntador);
}