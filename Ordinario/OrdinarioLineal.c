#include <stdio.h>

int main() {
    int filas, columnas;

    // Pedir el tamaño de la matriz original
    printf("Ingrese el número de columnas de la matriz: ");
    scanf("%d", &columnas);
    printf("Ingrese el número de filas de la matriz: ");
    scanf("%d", &filas);

    filas *= 2;  // Duplicamos el número de filas para almacenar numerador y denominador

    int matriz[filas][columnas];  // Declaramos la matriz con el nuevo tamaño

    // Llenar la matriz con valores de fracción
    for (int i = 0; i < filas; i += 2) {  // Incrementamos de 2 en 2 para manejar fracciones
        for (int j = 0; j < columnas; j++) {
            printf("Ingrese el numerador de la fraccion [%d][%d]: ", i / 2, j);
            scanf("%d", &matriz[i][j]);
            printf("Ingrese el denominador de la fraccion [%d][%d]: ", i / 2, j);
            scanf("%d", &matriz[i + 1][j]);
        }
    }

    // Imprimir la matriz como fracciones
    printf("\nMatriz de fracciones:\n");
    for (int i = 0; i < filas; i += 2) {  // Recorremos de 2 en 2
        for (int j = 0; j < columnas; j++) {
            printf("%d/%d\t", matriz[i][j], matriz[i + 1][j]);  // Imprime numerador/denominador
        }
        printf("\n");
    }

    return 0;
}
