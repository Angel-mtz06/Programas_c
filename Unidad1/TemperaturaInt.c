#include <stdio.h>

int main() {
    int fahr, celsius;
    int lower = 0;    // Límite inferior de la tabla
    int upper = 300;  // Límite superior de la tabla
    int step = 20;    // Incremento

    printf("Fahrenheit  Celsius\n");
    printf("------------------\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5 * (fahr - 32)) / 9;  // Fórmula de conversión
        printf("%10d %8d\n", fahr, celsius);
        fahr += step;
    }

    return 0;
}
