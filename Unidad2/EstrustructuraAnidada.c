#include <stdio.h>
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
    struct Contacto {
        char correo[50];
        int telefono;
    struct DatosAcademicos {
        int matricula;
        int semestre;
        int grupo;
    } datosAcademicos;} contacto;
};

int main (){
  struct  Estudiante Estudiantes[2];
  for (int i=0; i<2 ;i++){
    printf("Ingrese el nombre del estudiante %d: ", i);
    scanf("%s", Estudiantes[i].nombre);
    printf("Ingrese la edad del estudiante %d: ", i);
    scanf("%d", &Estudiantes[i].edad);
    printf("Ingrese el promedio del estudiante %d: ", i);
    scanf("%f", &Estudiantes[i].promedio);
    printf("Ingrese el correo del estudiante %d: ", i);
    scanf("%s", Estudiantes[i].contacto.correo);
    printf("Ingrese el telefono del estudiante %d: ", i);
    scanf("%d", &Estudiantes[i].contacto.telefono);
    printf("Ingrese la matricula del estudiante %d: ", i);
    scanf("%d", &Estudiantes[i].contacto.datosAcademicos.matricula);
    printf("Ingrese el semestre del estudiante %d: ", i);
    scanf("%d", &Estudiantes[i].contacto.datosAcademicos.semestre);
    printf("Ingrese el grupo del estudiante %d: ", i);
    scanf("%d", &Estudiantes[i].contacto.datosAcademicos.grupo);
  }
  for(int i=0; i<2; i++){
    printf("Nombre: %s\n", Estudiantes[i].nombre);
    printf("Edad: %d\n", Estudiantes[i].edad);
    printf("Promedio: %.2f\n", Estudiantes[i].promedio);
    printf("Correo: %s\n", Estudiantes[i].contacto.correo);
    printf("Telefono: %d\n", Estudiantes[i].contacto.telefono);
    printf("Matricula: %d\n", Estudiantes[i].contacto.datosAcademicos.matricula);
    printf("Semestre: %d\n", Estudiantes[i].contacto.datosAcademicos.semestre);
    printf("Grupo: %d\n", Estudiantes[i].contacto.datosAcademicos.grupo);
  }

} 