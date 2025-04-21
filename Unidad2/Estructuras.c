#include <stdio.h>
/*struct Estudiante Otra forma de hacerlo
{
    char nombre[50];
    int edad;
    float promedio;
    
};*/
typedef struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
} Estudiante;

int main (){
struct Estudiante estudiante1 = {"Juan", 20, 8.5};
printf("Nombre: %s\n", estudiante1.nombre);
printf("Edad: %d\n", estudiante1.edad);
printf("Promedio: %.2f\n", estudiante1.promedio);
return 0;
}