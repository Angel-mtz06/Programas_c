#include <stdio.h>

int main() {
    int filas = 4; // Numero de filas
    int base = 9;  // Numero de la última fila

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < filas - i; j++) {
            printf(" "); // Imprime los espacios para centrar
        }

        for (int j = 0; j < base - (filas - i - 1) * 2; j++) {
            printf("*"); // Imprime las estrellas
        }

        printf("\n");
    }

    return 0;
}
