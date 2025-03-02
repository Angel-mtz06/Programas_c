#include <stdio.h>

int main() {
    float fahr, celsius;
    float lower = 0;    // Límite inferior de la tabla
    float upper = 300;  // Límite superior de la tabla
    float step = 20;    // Incremento

    printf("Fahrenheit  Celsius\n");
    printf("------------------\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32);  // Fórmula de conversión
        printf("%10.1f %8.1f\n", fahr, celsius);
        fahr += step;
    }

    return 0;
}
