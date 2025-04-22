#include <stdio.h>
int MayorMenor( int a, int b){
    if (a > b){
        printf("El mayor es: %d\n", a);
        printf("El menor es: %d\n", b);
    } else {
        printf("El mayor es: %d\n", b);
        printf("El menor es: %d\n", a);
    }
}
int main(){
    int a, b;
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);
    MayorMenor(a, b);
    return 0;
}