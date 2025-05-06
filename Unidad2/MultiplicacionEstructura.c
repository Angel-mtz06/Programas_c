#include <stdio.h>
struct Tabla {
    int valor1;
    int valor2;
    int resultado;
};
int main(){
    struct Tabla tabla[3] = {
        {2, 3, 0},
        {5, 5, 0},
        {8, 8, 0}
    };
    for(int i = 0; i < 3; i++){
        tabla[i].resultado = tabla[i].valor1 * tabla[i].valor2;
    }
    for(int i = 0; i < 3; i++){
        printf("%d X %d = %d\n", tabla[i].valor1, tabla[i].valor2, tabla[i].resultado);
    }
}