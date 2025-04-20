#include <stdio.h>
int main(){
    int size;
    int swap;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &size);
    int numeros[size];
    for (int i = 0; i < size; i++){
        printf("Ingrese el valor en posicion %d: ", i);
        scanf("%d", &swap);
        numeros[i] = swap;

    }
    for (int i = 0; i < size; i++){
        printf("%d\n", numeros[i]);
    }    
}