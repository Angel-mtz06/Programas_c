#include <stdio.h>

int main() {
    // Tipos de datos
    int entero = 42;
    unsigned int entero_positivo = 100;
    short int entero_corto = 32000;
    long int entero_largo = 1234567890; //Declaraciones de las variables
    float flotante = 3.1416;
    double doble = 2.7182818284;
    char caracter = 'A';
    char cadena[] = "Hola, mundo";

    printf("Ejemplos de tipos de datos en C:\n");
    printf("Entero (int): %d\n", entero);
    printf("Entero sin signo (unsigned int): %u\n", entero_positivo);
    printf("Entero corto (short int): %hd\n", entero_corto);
    printf("Entero largo (long int): %ld\n", entero_largo);
    printf("Flotante (float): %f\n", flotante);
    printf("Doble precisión (double): %lf\n", doble);
    printf("Carácter (char): %c\n", caracter);
    printf("Cadena de caracteres (char[]): %s\n", cadena);
    printf("Dirección de memoria (void*): %p\n", (void*)&entero);
    
    return 0;
}