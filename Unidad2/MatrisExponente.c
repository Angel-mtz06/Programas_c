#include <stdio.h>
#include <math.h>

void leerMatriz(int n, int M[n][n]);
void elevarMatriz(int n, int A[n][n], int B[n][n], int C[n][n]);
void imprimirMatriz(int n, int M[n][n]);

int main(){
    int n;
    scanf("%d",&n);
    int A[n][n], B[n][n], C[n][n];
    leerMatriz(n, A);
    leerMatriz(n, B);
    elevarMatriz(n, A, B, C);
    imprimirMatriz(n, C);
    return 0;
}

void leerMatriz(int n, int M[n][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &M[i][j]);
        }
    }
}

void elevarMatriz(int n, int A[n][n], int B[n][n], int C[n][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            C[i][j] = pow(A[i][j], B[i][j]);
        }
    }
}

void imprimirMatriz(int n, int M[n][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
}
