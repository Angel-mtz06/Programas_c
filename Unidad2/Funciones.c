#include <stdio.h>
int suma(int a, int b) {
    return a + b;
}
int resta(int a, int b) {
    int resultado = a - b;
    return resultado;
}
int multiplicacion(int a, int b) {
    return a * b;
}
float division(int a, int b) {
        return a / b;   
}
void imprimir (int a,int b, int c, float d){
    printf("\nResultados \nSuma: %d\nResta %d\nMultiplicaacion %d\nDivision %f", a, b, c, d);
} 
int main(){

    int op1=suma(3,2);
    int op2=resta(3,2);
    int op3=multiplicacion(3,2);
    float op4=division(3,2);
    imprimir(op1,op2,op3,op4);
    return 0;
}