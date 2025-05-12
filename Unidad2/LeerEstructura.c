#include <stdio.h>
struct usuario {
    char nombre[50];
    int edad;
    char correo[50];
};
int main (){
    struct usuario usuario1;
    printf("Ingrese su nombre: ");
    scanf("%s", usuario1.nombre);
    printf("Ingrese su edad: ");
    scanf("%d", &usuario1.edad);
    printf("Ingrese su correo: ");
    scanf("%s", usuario1.correo);
    printf("Nombre: %s\n", usuario1.nombre);
    printf("Edad: %d\n", usuario1.edad);    
    printf("Correo: %s\n", usuario1.correo);
}