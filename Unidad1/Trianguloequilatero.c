#include <stdio.h>

int main() {
    int filas = 5;

    for (int i = 1; i <= filas; i++) {
        for (int j = 1; j <= filas - i; j++) {
            printf(" "); 
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

}
