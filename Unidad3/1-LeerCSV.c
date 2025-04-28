#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 1024
int main (){
    FILE *file;
    char line[MAX_LINE];
    char *token;

    //Abrir el archivo modo lectura
    file =  fopen ("../ldatos.csv", "r");
    if (file == NULL) {
        printf("Error al abrir el archivo\n");
        return 1;
    }

    //Leer el archivo linea por linea
    while (fgets(line, sizeof(line), file)){// Leer una línea del archivo
        line[strcspn(line, "\n")] = 0; // Eliminar el salto de línea
        token = strtok(line, ",");// Dividir la línea en tokens usando la coma como delimitador
        if (token != NULL) {
            printf("Nombre: %s\n", token);// Imprimir el primer token (nombre)
            token = strtok(NULL, ",");// Obtener el siguiente token
        if (token != NULL) {
            printf("Edad: %s\n", token);
            token = strtok(NULL, ",");
        if (token != NULL) {
            printf("Ciudad: %s\n", token);
                }
            }
        }

        printf("\n");

    }
    fclose(file);// Cerrar el archivo
    return 0;
}