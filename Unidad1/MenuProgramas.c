#include <stdio.h>
int main (){
    int opcion;
    printf("1. Programa 1\n");
    printf("2. Programa 2\n");
    printf("3. Programa 3\n");
    printf("4. Salir\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);
    switch(opcion){
        case 1:
            printf("Programa 1\n");
            break;
        case 2:
            printf("Programa 2\n");
            break;
        case 3:
            printf("Programa 3\n");
            break;
        case 4:
            printf("Salir\n");
            break;
        default:
            printf("Opcion no valida\n");
    }
    return 0;
}