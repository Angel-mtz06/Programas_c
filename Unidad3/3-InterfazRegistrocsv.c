#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}

void setColor(const char* color) {
    printf("%s", color);
}

void limpiarPantalla() {
    printf("\033[2J");
    gotoxy(0, 0);   
}

void dibujarMarco(int ancho, int alto) {
    setColor("\033[36m"); // Cyan
    for (int i = 0; i < ancho; i++) { printf("*"); }
    printf("\n");

    for (int i = 0; i < alto - 2; i++) {
        printf("*");
        for (int j = 0; j < ancho - 2; j++) { printf(" "); }
        printf("*\n");
    }

    for (int i = 0; i < ancho; i++) { printf("*"); }
    printf("\n");
    setColor("\033[0m"); // Reset color
}

int main(){
    FILE *file;
    char nombre[MAX];
    int edad;
    char pais[MAX];
    int numpersonas;

    limpiarPantalla();
    dibujarMarco(50, 10);
    gotoxy(10, 3);
    setColor("\033[32m"); 
    printf("Registro de Personas");
    gotoxy(10, 5);
    setColor("\033[33m"); 
    printf("Personas: ");
    scanf("%d", &numpersonas);
    getchar(); 
    limpiarPantalla();

    char nombreArchivo[MAX];
    dibujarMarco(50, 10);
    gotoxy(10, 3);
    setColor("\033[32m"); 
    printf("Nombre del Archivo");
    gotoxy(10, 5);
    setColor("\033[33m"); 
    printf("Archivo: ");
    scanf("%s", nombreArchivo);
    getchar();

    char rutaCompleta[MAX];
    strcpy(rutaCompleta, "../");
    strcat(rutaCompleta, nombreArchivo);
    strcat(rutaCompleta, ".csv");
    limpiarPantalla();

    file = fopen(rutaCompleta, "w"); 
    if (file == NULL) {
        setColor("\033[31m"); 
        printf("Error al abrir el archivo\n");
        return 1;
    }

    fprintf(file, "Nombre,Edad,Pais\n");

    for (int i = 0; i < numpersonas; i++) {
        limpiarPantalla();
        dibujarMarco(50, 15);
        gotoxy(10, 3);
        setColor("\033[32m"); 
        printf("Persona %d de %d", i + 1, numpersonas);

        gotoxy(10, 5);
        setColor("\033[33m"); 
        printf("Nombre: ");
        fgets(nombre, sizeof(nombre), stdin);
        nombre[strcspn(nombre, "\n")] = 0; 

        gotoxy(10, 7);
        printf("Edad: ");
        scanf("%d", &edad);
        getchar(); 

        gotoxy(10, 9);
        printf("Pais: ");
        fgets(pais, sizeof(pais), stdin);
        pais[strcspn(pais, "\n")] = 0; 

        fprintf(file, "%s,%d,%s\n", nombre, edad, pais);
    }
    fclose(file);

    limpiarPantalla();
    file = fopen(rutaCompleta, "r");
    if (file == NULL) {
        setColor("\033[31m");
        printf("Error al abrir el archivo\n");
        return 1;
    }

    limpiarPantalla();
    dibujarMarco(60, 20);
    gotoxy(5, 2);
    setColor("\033[32m"); 
    printf("Contenido del archivo:\n");

    char line[MAX];
    char *token;
    fgets(line, sizeof(line), file); // Saltamos la primera línea (encabezado)

    int fila = 4;
    while (fgets(line, sizeof(line), file)) {
        line[strcspn(line, "\n")] = 0;
        token = strtok(line, ",");

        gotoxy(5, fila++);
        setColor("\033[36m"); 
        printf("nombre|edad|pais\n");
        if (token != NULL) {
            printf(" %s", token);
            token = strtok(NULL, ",");
        }

        if (token != NULL) {
            printf(" |  %s", token);
            token = strtok(NULL, ",");
        }

        if (token != NULL) {
            printf(" | %s", token);
        }
    }
    setColor("\033[0m"); // Reset color

    fclose(file);
    return 0;
}
