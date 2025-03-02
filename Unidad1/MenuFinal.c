#include <stdio.h>

int main() {
    int opcion;

    // Menu de opciones
    printf("\n%s\n", "MENU DE OPCIONES");
    printf("%s\n", "1. Caracteres de Escape");
    printf("%s\n", "2. Tipos de Datos");
    printf("%s\n", "3. Promedio de Calificaciones");
    printf("%s\n", "4. Conversion de Temperatura (Entero)");
    printf("%s\n", "5. Conversion de Temperatura (Flotante)");
    printf("%s\n", "6. Tablas de Multiplicar");
    printf("%s\n", "7. Diagonales");
    printf("%s\n", "8. Cuadro de Numeros");
    printf("%s\n", "9. Cuadro de Asteriscos");
    printf("%s\n", "10. Triangulo Rectangulo");
    printf("%s\n", "11. Triangulo Rectangulo 2");
    printf("%s\n", "12. Triangulo Equilatero");
    printf("%s\n", "13. Trapecio");
    printf("%s\n", "14. Promedio con Entrada de Datos");
    printf("%s\n", "15. Volumen de Figuras");
    printf("%s\n", "16. Prueba Switch");
    printf("%s\n", "17. Calculadora");
    printf("%s\n", "18. Prueba Switch 2");
    printf("%s", "Seleccione una opcion: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1: // Caracteres de Escape
            printf("%s\n", "Ejemplos de secuencias de escape:");
            printf("%s\n", "Nueva linea (\\n): Primera linea\nSegunda linea");
            printf("%s\n", "Tabulacion (\\t): Columna 1\tColumna 2\tColumna 3");
            printf("%s\n", "Barra invertida (\\\\): Esto es una barra invertida: \\");
            break;
        case 2: // Tipos de Datos
            printf("%s\n", "Ejemplo de tipos de datos en C:");
            printf("%s %d\n", "Entero:", 42);
            printf("%s %f\n", "Flotante:", 3.1416);
            printf("%s %c\n", "Caracter:", 'A');
            break;
        case 3: { // Promedio con valores fijos
            int cal1 = 7, cal2 = 4, cal3 = 3;
            float promedio = (cal1 + cal2 + cal3) / 3.0;
            printf("%s %.2f\n", "El promedio de 7, 4 y 3 es:", promedio);
            break;
        }
        case 4: { // Conversion de temperatura con enteros
            int fahr;
            int lower = 0, upper = 300, step = 20;
            for (fahr = lower; fahr <= upper; fahr += step)
                printf("%d%s%d%s\n", fahr, "F = ", (5 * (fahr - 32)) / 9, "C");
            break;
        }
        case 5: { // Conversion de temperatura con flotantes
            float fahr;
            float lower = 0, upper = 300, step = 20;
            for (fahr = lower; fahr <= upper; fahr += step)
                printf("%.1f%s%.1f%s\n", fahr, "F = ", (5.0 / 9.0) * (fahr - 32), "C");
            break;
        }
        case 6: // Tablas de Multiplicar
            for (int i = 1; i <= 10; i++) {
                for (int j = 1; j <= 10; j++)
                    printf("%d %s %d %s %d\n", i, "x", j, "=", i * j);
                printf("\n");
            }
            break;
        case 7: // Diagonales
            for (int i = 0; i < 9; i++) {
                for (int j = 0; j <= i; j++) printf("%d", j);
                printf("\n");
            }
            break;
        case 8: { // Cuadro de Numeros con tamano configurable
            int tam;
            printf("%s", "Ingrese el tamano del cuadro: ");
            scanf("%d", &tam);
            for (int i = 0; i < tam; i++) {
                for (int j = 1; j <= tam; j++) {
                    printf("%d ", j);
                }
                printf("\n");
            }
            break;
        }
        case 9: // Cuadro de Asteriscos
            for (int i = 0; i < 4; i++) printf("%s\n", "****");
            break;
        case 10: // Triangulo Rectangulo
            for (int i = 1; i <= 5; i++) {
                for (int j = 1; j <= i; j++) printf("%s", "*");
                printf("\n");
            }
            break;
        case 11: // Triangulo Rectangulo 2
            for (int i = 1; i <= 5; i++) {
                for (int j = 1; j <= i; j++) printf("%s ", "*");
                printf("\n");
            }
            break;
        case 12: // Triangulo Equilatero
            for (int i = 1; i <= 5; i++) {
                for (int j = 1; j <= 5 - i; j++) printf("%s", " ");
                for (int k = 1; k <= (2 * i - 1); k++) printf("%s", "*");
                printf("\n");
            }
            break;
        case 13: // Trapecio
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4 - i; j++) printf("%s", " ");
                for (int j = 0; j < 9 - (4 - i - 1) * 2; j++) printf("%s", "*");
                printf("\n");
            }
            break;
        case 14: { // Promedio con entrada de datos
            float cal1, cal2;
            printf("%s", "Ingrese la 1ra calificacion: ");
            scanf("%f", &cal1);
            printf("%s", "Ingrese la 2da calificacion: ");
            scanf("%f", &cal2);
            printf("%s %.2f\n", "El promedio es:", (cal1 + cal2) / 2);
            break;
        }
        case 15: { // Volumen de Figuras
            double radio, altura;
            printf("%s", "Ingrese radio y altura: ");
            scanf("%lf %lf", &radio, &altura);
            printf("%s %.2lf\n", "Volumen del cono:", (3.14 * radio * radio * altura) / 3);
            printf("%s %.2lf\n", "Volumen del cilindro:", 3.14 * radio * radio * altura);
            printf("%s %.2lf\n", "Volumen de la esfera:", (4.0 / 3.0) * 3.14 * radio * radio * radio);
            break;
        }
        case 16: // Prueba Switch
            printf("%s", "Ingrese 1 o 2: ");
            scanf("%d", &opcion);
            switch(opcion) {
                case 1: printf("%s\n", "Has seleccionado la opcion 1."); break;
                case 2: printf("%s\n", "Has seleccionado la opcion 2."); break;
                default: printf("%s\n", "Opcion no valida"); return 0;
            }
            break;
        case 17: // Calculadora
            printf("%s\n", "Calculadora omitida aqui por espacio");
            break;
        case 18: // Prueba Switch 2
            printf("%s", "Ingrese 1 o 2: ");
            scanf("%d", &opcion);
            switch(opcion) {
                case 1: printf("%s\n", "Has seleccionado la opcion 1."); break;
                case 2: printf("%s\n", "Has seleccionado la opcion 2."); break;
                default: printf("%s\n", "Opcion no valida"); return 0;
            }
            break;
        default:
            printf("%s\n", "Elige otra opcion");
            return 0;
    }

    return 0;
}
