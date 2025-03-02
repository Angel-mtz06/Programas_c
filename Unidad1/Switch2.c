#include <stdio.h>

int main() {
    int opcion;
    float num1, num2, resultado;

    // Solicita al usuario que ingrese una opción
    printf("Seleccione la operacion que desea realizar:\n");
    printf("1. Sumar dos numeros\n");
    printf("2. Restar dos numeros\n");
    printf("Ingrese su opcion 1 o 2: ");
    scanf("%d", &opcion);

    // Solicita al usuario que ingrese los dos números
    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);

    // Estructura switch para manejar las opciones
    switch(opcion) {
        case 1:
            resultado = num1 + num2;
            printf("El resultado de la suma es: %.2f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("El resultado de la resta es: %.2f\n", resultado);
            break;
        default:
            printf("Opción no válida. Por favor, seleccione 1 o 2.\n");
            break;
    }

    return 0;
}
