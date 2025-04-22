#include <stdio.h>

void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}

void setColor(const char* color) {
    printf("%s", color);
}

void limpiarPantalla() {
    printf("\033[2J");
    gotoxy(0, 0);
}

void leerMatriz(int n, int M[n][n], int x_inicio, int y_inicio) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            gotoxy(x_inicio + j * 5, y_inicio + i);
            printf("     "); 
            gotoxy(x_inicio + j * 5, y_inicio + i);
            scanf("%d", &M[i][j]);
        }
    }
}

void imprimirMatrizConBorde(int n, int M[n][n]) {
    int ancho = n * 4 + 1;

    for(int i = 0; i < ancho; i++) printf("*");
    printf("\n");

    for(int i = 0; i < n; i++) {
        printf("*");
        for(int j = 0; j < n; j++) {
            printf(" %2d ", M[i][j]);
        }
        printf("*\n");
    }

    for(int i = 0; i < ancho; i++) printf("*");
    printf("\n");
}

void imprimirOperacionHorizontal(int n, int A[n][n], int B[n][n], int R[n][n], char operador) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) printf("***** ");
        printf("   ");
        for(int j = 0; j < n; j++) printf("***** ");
        printf("   ");
        for(int j = 0; j < n; j++) printf("***** ");
        printf("\n");

        for(int j = 0; j < n; j++) printf("*%2d * ", A[i][j]);
        if (i == n / 2) printf(" %c ", operador);
        else printf("   ");
        for(int j = 0; j < n; j++) printf("*%2d * ", B[i][j]);
        if (i == n / 2) printf(" = ");
        else printf("   ");
        for(int j = 0; j < n; j++) printf("*%2d * ", R[i][j]);
        printf("\n");

        for(int j = 0; j < n; j++) printf("***** ");
        printf("   ");
        for(int j = 0; j < n; j++) printf("***** ");
        printf("   ");
        for(int j = 0; j < n; j++) printf("***** ");
        printf("\n");
    }
}

void sumarMatrices(int n, int A[n][n], int B[n][n], int R[n][n]) {
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            R[i][j] = A[i][j] + B[i][j];
}

void restarMatrices(int n, int A[n][n], int B[n][n], int R[n][n]) {
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            R[i][j] = A[i][j] - B[i][j];
}

void multiplicarPorEscalar(int n, int A[n][n], int escalar, int R[n][n]) {
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            R[i][j] = A[i][j] * escalar;
}

int determinante2x2(int M[2][2]) {
    return M[0][0]*M[1][1] - M[0][1]*M[1][0];
}

int determinante3x3(int M[3][3]) {
    return M[0][0]*(M[1][1]*M[2][2] - M[1][2]*M[2][1])
         - M[0][1]*(M[1][0]*M[2][2] - M[1][2]*M[2][0])
         + M[0][2]*(M[1][0]*M[2][1] - M[1][1]*M[2][0]);
}

int main() {
    int n, opcion, escalar;

    limpiarPantalla();
    gotoxy(1, 1);
    printf("Tamaño de la matriz (n x n): ");
    scanf("%d", &n);

    int A[n][n], B[n][n], R[n][n];

    limpiarPantalla();
    gotoxy(1, 1);
    printf("Ingresa los valores de la matriz A:");
    leerMatriz(n, A, 5, 3);

    limpiarPantalla();
    gotoxy(1, 1);
    printf("Elige una operacion:\n");
    printf("1. Suma de matrices\n");
    printf("2. Resta de matrices\n");
    printf("3. Multiplicación por escalar\n");
    printf("4. Determinante (solo 2x2 o 3x3)\n");
    scanf("%d", &opcion);

    limpiarPantalla();
    switch(opcion) {
        case 1:
            gotoxy(1, 1);
            printf("Ingresa los valores de la matriz B:");
            leerMatriz(n, B, 5, 3);
            sumarMatrices(n, A, B, R);
            limpiarPantalla();

            setColor("\033[36m");
            imprimirOperacionHorizontal(n, A, B, R, '+');
            setColor("\033[0m");
            break;

        case 2:
            gotoxy(1, 1);
            printf("Ingresa los valores de la matriz B:");
            leerMatriz(n, B, 5, 3);
            restarMatrices(n, A, B, R);
            limpiarPantalla();

            setColor("\033[33m");
            imprimirOperacionHorizontal(n, A, B, R, '-');
            setColor("\033[0m");
            break;

        case 3:
            gotoxy(1, 1);
            printf("Ingresa el escalar: ");
            scanf("%d", &escalar);
            multiplicarPorEscalar(n, A, escalar, R);
            limpiarPantalla();

            setColor("\033[34m");
            printf("Resultado de la multiplicación por escalar:\n");
            imprimirMatrizConBorde(n, R);
            setColor("\033[0m");
            break;

        case 4:
            if(n == 2) {
                int resultado = determinante2x2(A);
                printf("Determinante de la matriz A: %d\n", resultado);
            } else if(n == 3) {
                int resultado = determinante3x3(A);
                printf("Determinante de la matriz A: %d\n", resultado);
            } else {
                printf("El determinante solo está disponible para matrices 2x2 o 3x3.\n");
            }
            break;

        default:
            printf("Opción no válida.\n");
    }

    return 0;
}
