#include <stdio.h>
void mmultmatrvect(int matriz[3][3],int  vector[3],int vector2[3]) {
    for (int i = 0; i < 3; i++) {
        int suma = 0;
        for (int j = 0; j < 3; j++) {
            suma += matriz[i][j] * vector[j];
        }
        vector2[i] = suma;
    }

}
int main() {
    int matriz[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int vector[3] = {1, 2, 3};
    int vector2[3];
    mmultmatrvect(matriz, vector, vector2);

   
    printf("Resultado del producto:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", vector2[i]);
    }
    printf("\n");

    return 0;
}
