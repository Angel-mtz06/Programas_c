#include <stdio.h>

int main() {
    double radio, altura, volumenCon, volumenCil, volumenEs, pi = 3.14; // Variables para los datos de entrada y salida
    // Variables para los datos de entrada y salida

    printf("Ingresa el radio:");
    scanf("%lf", &radio);

    printf("Ingresa la altura:");
    scanf("%lf", &altura);
    // Se calculan los volúmenes
    volumenCon = (pi * radio * radio * altura) / 3;
    volumenCil = pi * radio * radio * altura;
    volumenEs = (4.0 / 3.0) * pi * radio * radio * radio;

    printf("\nResultados:\n");
    printf("Volumen del Cono: %.2lf\n", volumenCon);
    printf("Volumen del Cilindro: %.2lf\n", volumenCil);
    printf("Volumen de la Esfera: %.2lf\n", volumenEs);

}
