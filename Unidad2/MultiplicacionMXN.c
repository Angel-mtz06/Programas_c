#include <stdio.h>

void leerMatriz(int filas, int columnas, float matriz[filas][columnas]) {
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            printf("Espacio [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
}

void multiplicarMatrices(int n, int m, int p,
             float A[n][m],
             float B[m][p],
             float C[n][p]) {
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
        C[i][j] = 0.0f;
        for(int k = 0; k < m; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int n, m, p;

    printf("Filas de la primera matriz: ");
    scanf("%d", &n);
    printf("Columnas de la primera matriz: ");
    scanf("%d", &m);
    
    float A[n][m];

    leerMatriz(n, m, A);

    printf("Columnas de la segunda matriz: ");
    scanf("%d", &p);

    float B[m][p];

    leerMatriz(m, p, B);

    float C[n][p];

    multiplicarMatrices(n, m, p, A, B, C);

    printf("Resultado de la multiplicacion:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            printf("%.2f\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
