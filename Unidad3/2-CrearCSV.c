#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int main(){

FILE *file;
char nombre[MAX];
int edad;
char pais[MAX];
int cantidad, i;
// Abrir el archivo en modo escritura
file = fopen("../ldatos.csv", "w");
if (file == NULL) {
    printf("Error al abrir el archivo\n");
    return 1;

}
// Escribir encabezados
fprintf(file, "Nombre,Edad,Pais\n");

printf("Ingrese la cantidad de personas a registrar: ");
scanf("%d", &cantidad);
getchar(); // Limpiar el buffer de entrada

for (i = 0; i < cantidad; i++) {
   printf("Persona %d:\n", i + 1);
    printf("Nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    nombre[strcspn(nombre, "\n")] = 0; // Eliminar el salto de línea
    printf("Edad: ");
    scanf("%d", &edad);
    getchar(); // Limpiar el buffer de entrada
    printf("Pais: ");
    fgets(pais, sizeof(pais), stdin);
    pais[strcspn(pais, "\n")] = 0; // Eliminar el salto de línea
    fprintf(file, "%s,%d,%s\n", nombre, edad, pais); // Escribir los datos en el archivo

}
fclose(file); // Cerrar el archivo
return 0;
}