#include <stdio.h>

int main() {
    float cal1, cal2, promedio;//Declara las variables de tipo flotante

    printf("Ingrese la 1ra calificación: ");//Pide al usuario que ingrese la calificación
    scanf("%f", &cal1);

    printf("Ingrese la 2da calificación: ");
    scanf("%f", &cal2);

    promedio = (cal1 + cal2) / 2; // Calcula el promedio

    printf("El promedio es: %.2f\n", promedio);

    return 0;
}
