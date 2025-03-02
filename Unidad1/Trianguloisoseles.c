#include <stdio.h>

int main() {
    int filas = 5;

    for (int i = 1; i <= filas; i++) {
        for (int j = 1; j <= filas - i; j++) {
            printf(" "); // Espacios para centrar
        }
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
