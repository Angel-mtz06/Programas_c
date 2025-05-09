#include <stdio.h>
int impares(int a){
    int i = 0;
    for (i = 1; i <= a; i++){
        if (i % 2 != 0){
            printf("%d ", i);
        }
    }
}
int main(){
    int a;
    printf("Ingrese un numero: ");
    scanf("%d", &a);
    impares(a);
    return 0;
}