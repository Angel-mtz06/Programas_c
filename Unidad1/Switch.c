#include <stdio.h>

int main() {
    int opcion;

    // Solicita al usuario que ingrese una opción
    printf("Ingrese una opción (1 o 2): ");
    scanf("%d", &opcion);

    // Estructura switch para manejar las opciones
    switch(opcion) {
        case 1:
            printf("Has seleccionado la opción 1.\n");
            break;
        case 2:
            printf("Has seleccionado la opción 2.\n");
            break;
        default:
            printf("Opción no válida. Por favor, selecciona 1 o 2.\n");
            break;
    }

    return 0;
}
