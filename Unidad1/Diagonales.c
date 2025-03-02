// En este codigo se encuentran las 4 diagonales pedidas separadas por comentarios 
#include <stdio.h>
//Diagonal 1
int main() {
    int i, j, rows = 9;

    for (i = 0; i < rows; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
//Diagonal 2

int main() {
    int i, j, rows = 9;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < rows - i - 1; j++) {
            printf(" "); // Espacios para alinear
        }
        for (j = 0; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
//Diagonal 3
#include <stdio.h>

int main() {
    int i, j, rows = 9;

    for (i = rows; i > 0; i--) {
        for (j = 0; j < i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
//Diagonal 4
#include <stdio.h>

int main() {
    int i, j, rows = 9;

    for (i = rows; i > 0; i--) {
        for (j = 0; j < rows - i; j++) {
            printf(" "); // Espacios para alinear
        }
        for (j = 0; j < i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
