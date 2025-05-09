#include <stdio.h>
#include <math.h>
#define pi 3.1416

float cuadrado(float lado) {
    return lado * lado;
}

float triangulo(float base, float altura) {
    return (base * altura) / 2;
}

float rectangulo(float base, float altura) {
    return base * altura;
}

float circulo(float radio) {
    return pi * radio * radio;
}

float trapecio(float baseMayor, float baseMenor, float altura) {
    return ((baseMayor + baseMenor) * altura) / 2;
}

float cubo(float lado) {
    return lado * lado * lado;
}

float esfera(float radio) {
    return (4.0 / 3.0) * pi * radio * radio * radio;
}

float cilindro(float radio, float altura) {
    return pi * radio * radio * altura;
}

float cono(float radio, float altura) {
    return (1.0 / 3.0) * pi * radio * radio * altura;
}

float piramide(float base, float altura) {
    return (1.0 / 3.0) * base * altura;
}

union MiUnion {
    float resultado;
};

void menu() {
    printf("Seleccione una opcion\n");
    printf("1. Cuadrado\n");
    printf("2. Triangulo\n");
    printf("3. Rectangulo\n");
    printf("4. Circulo\n");
    printf("5. Trapecio\n");
    printf("6. Cubo\n");
    printf("7. Esfera\n");
    printf("8. Cilindro\n");
    printf("9. Cono\n");
    printf("10. Piramide\n");
}

int main() {
    union MiUnion resultado;
    float arreglo[1]; 
    int opcion;
    float lado, base, altura, radio, baseMayor, baseMenor;
    
    menu();
    printf("Ingrese la opcion: \n");
    scanf("%d", &opcion);
    
    switch(opcion) {
        case 1:
            printf("Ingrese el lado del cuadrado: ");
            scanf("%f", &lado);
            resultado.resultado = cuadrado(lado);
            arreglo[0] = resultado.resultado;
            printf("El resultado es: %.2f\n", arreglo[0]);
            break;
        case 2:
            printf("Ingrese la base del triangulo: ");
            scanf("%f", &base);
            printf("Ingrese la altura del triangulo: ");
            scanf("%f", &altura);
            resultado.resultado = triangulo(base, altura);
            arreglo[0] = resultado.resultado;
            printf("El area del triangulo es: %.2f\n", arreglo[0]);
            break;
        case 3:
            printf("Ingrese la base del rectangulo: ");
            scanf("%f", &base);
            printf("Ingrese la altura del rectangulo: ");
            scanf("%f", &altura);
            resultado.resultado = rectangulo(base, altura);
            arreglo[0] = resultado.resultado;
            printf("El area del rectangulo es: %.2f\n", arreglo[0]);
            break;
        case 4:
            printf("Ingrese el radio del circulo: ");
            scanf("%f", &radio);
            resultado.resultado = circulo(radio);
            arreglo[0] = resultado.resultado;
            printf("El area del circulo es: %.2f\n", arreglo[0]);
            break;
        case 5:
            printf("Ingrese la base mayor del trapecio: ");
            scanf("%f", &baseMayor);
            printf("Ingrese la base menor del trapecio: ");
            scanf("%f", &baseMenor);
            printf("Ingrese la altura del trapecio: ");
            scanf("%f", &altura);
            resultado.resultado = trapecio(baseMayor, baseMenor, altura);
            arreglo[0] = resultado.resultado;
            printf("El area del trapecio es: %.2f\n", arreglo[0]);
            break;
        case 6:
            printf("Ingrese el lado del cubo: ");
            scanf("%f", &lado);
            resultado.resultado = cubo(lado);
            arreglo[0] = resultado.resultado;
            printf("El volumen del cubo es: %.2f\n", arreglo[0]);
            break;
        case 7:
            printf("Ingrese el radio de la esfera: ");
            scanf("%f", &radio);
            resultado.resultado = esfera(radio);
            arreglo[0] = resultado.resultado;
            printf("El volumen de la esfera es: %.2f\n", arreglo[0]);
            break;
        case 8:
            printf("Ingrese el radio del cilindro: ");
            scanf("%f", &radio);
            printf("Ingrese la altura del cilindro: ");
            scanf("%f", &altura);
            resultado.resultado = cilindro(radio, altura);
            arreglo[0] = resultado.resultado;
            printf("El volumen del cilindro es: %.2f\n", arreglo[0]);
            break;
        case 9:
            printf("Ingrese el radio del cono: ");
            scanf("%f", &radio);
            printf("Ingrese la altura del cono: ");
            scanf("%f", &altura);
            resultado.resultado = cono(radio, altura);
            arreglo[0] = resultado.resultado;
            printf("El volumen del cono es: %.2f\n", arreglo[0]);
            break;
        case 10:
            printf("Ingrese la base de la piramide: ");
            scanf("%f", &base);
            printf("Ingrese la altura de la piramide: ");
            scanf("%f", &altura);
            resultado.resultado = piramide(base, altura);
            arreglo[0] = resultado.resultado;
            printf("El volumen de la piramide es: %.2f\n", arreglo[0]);
            break;
        default:
            printf("Opcion no valida\n");
            break;
    }
    
    return 0;
}