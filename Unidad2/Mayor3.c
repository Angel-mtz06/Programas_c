#include <stdio.h>
int Mayor(int a, int b, int c){
    if (a > b && a > c){
        return a;
    } else if (b > a && b > c){
        return b;
    } else {
        return c;
    }
}
int main(){
    int a, b, c;
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &c);
    printf("El mayor es: %d\n", Mayor(a, b, c));
}