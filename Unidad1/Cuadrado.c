#include <stdio.h>

int main() {
    int lado=4; // Tamaño del lado del cuadrado

    if (lado < 2) {
        printf("El tamaño del lado debe ser al menos 2.\n");
        return 1;
    }

    for (int i = 0; i < lado; i++) {//Imprime la primera fila
        printf("*");
    }
    printf("\n");

    for (int i = 0; i < lado - 2; i++) {//Imprime las filas intermedias
        printf("*");
        for (int j = 0; j < lado - 2; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    if (lado > 1) {
        for (int i = 0; i < lado; i++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
