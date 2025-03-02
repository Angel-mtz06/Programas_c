#include <stdio.h>

int main() {


    for (int i = 1; i <= 10; i++) {  // Filas (números del 1 al 10)
        for (int j = 1; j <= 10; j++) {  // Columnas (multiplicando del 1 al 10)
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); // Salto de línea para separar las tablas
    }

    return 0;
}
