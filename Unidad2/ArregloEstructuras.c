#include <stdio.h>
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
    char correo[50];
    int telefono;
    int matricula;
    int semestre;
    int grupo;
};

int main (){
    int size;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &size);
    struct Estudiante estudiantes[size];
    for (int i = 0; i < size; i++){
        printf("Ingrese el nombre del estudiante %d: ", i);
        scanf("%s", estudiantes[i].nombre);
        printf("Ingrese la edad del estudiante %d: ", i);
        scanf("%d", &estudiantes[i].edad);
        printf("Ingrese el promedio del estudiante %d: ", i);
        scanf("%f", &estudiantes[i].promedio);
        printf("Ingrese el correo del estudiante %d: ", i);
        scanf("%s", estudiantes[i].correo);
        printf("Ingrese el telefono del estudiante %d: ", i);
        scanf("%d", &estudiantes[i].telefono);
        printf("Ingrese la matricula del estudiante %d: ", i);
        scanf("%d", &estudiantes[i].matricula);
        printf("Ingrese el semestre del estudiante %d: ", i);
        scanf("%d", &estudiantes[i].semestre);
        printf("Ingrese el grupo del estudiante %d: ", i);
        scanf("%d", &estudiantes[i].grupo);
    }
    for( int i = 0; i < size; i++){
        printf("Nombre: %s\n", estudiantes[i].nombre);
        printf("Edad: %d\n", estudiantes[i].edad);
        printf("Promedio: %f\n", estudiantes[i].promedio);
        printf("Correo: %s\n", estudiantes[i].correo);
        printf("Telefono: %d\n", estudiantes[i].telefono);
        printf("Matricula: %d\n", estudiantes[i].matricula);
        printf("Semestre: %d\n", estudiantes[i].semestre);
        printf("Grupo: %d\n", estudiantes[i].grupo);
    }
    return 0;
}