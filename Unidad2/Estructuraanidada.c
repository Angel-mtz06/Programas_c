#include <stdio.h>
struct Direccion {
    char calle[50];
    int numero;


};
struct persona {
    char nombre[50];
    struct Direccion direccion;
};
int main (){
    struct persona persona1 = {"Juan", {"Calle 1", 123}};
    printf("Nombre: %s\n", persona1.nombre);
    printf("Direccion: %s %d\n", persona1.direccion.calle, persona1.direccion.numero);
    return 0;
}