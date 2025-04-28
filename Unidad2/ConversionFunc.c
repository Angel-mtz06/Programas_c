#include <stdio.h>
float celfahr(float celsius){
    return (celsius * 9 / 5) + 32;
}
float fahrcel(float fahrenheit){
    return (fahrenheit - 32) * 5 / 9;
}
int main(){
    printf("1. celsius a fahrenheit\n");
    printf("2. fahrenheit a celsius\n");
    int opcion;
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);
    switch (opcion) {
      case 1:
        float celsius;
        printf("Ingrese la temperatura en Celsius: ");
        scanf("%f", &celsius);
        printf("La temperatura en Fahrenheit es: %.2f\n", celfahr(celsius));
        break;
        case 2:
        float fahrenheit;
        printf("Ingrese la temperatura en Fahrenheit: ");
        scanf("%f", &fahrenheit);
        printf("La temperatura en Celsius es: %.2f\n", fahrcel(fahrenheit));
        break;
        default:
        printf("Opcion no valida\n");
        break;  
    }
}