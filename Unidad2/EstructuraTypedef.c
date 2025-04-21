#include <stdio.h>
#include <string.h>
#define FILAS 3  /*drectivas del procesador */
#define COLUMNAS 2

typedef struct {
    char nombre [50];
    int edad;
}Persona;

typedef struct{
    char productos [50];
    float precio;
} Producto;

typedef union{
    Persona persona;
    Producto producto;
}Dato;

typedef struct{
    Dato valor;
    int tipo;
}Celda;
int main (){
    Celda matriz [FILAS][COLUMNAS];
    strcpy(matriz[0][0].valor.persona.nombre, "Alejandro");
    matriz[0][0].valor.persona.edad = 20;
    matriz[0][0].tipo = 1;
    matriz[0][1].tipo = 0;

    strcpy(matriz[1][0].valor.producto.productos, "Conejo");
    matriz[1][0].valor.producto.precio = 10.5;
    matriz[1][0].tipo = 2;
    matriz[1][1].tipo = 0;

    strcpy(matriz[2][0].valor.producto.productos, "Golden");
    matriz[2][0].valor.producto.precio = 15.5;
    matriz[2][0].tipo = 2;
    matriz[2][1].tipo = 0;

    for (int i = 0; i < FILAS; i++){
       for (int j = 0; j < COLUMNAS; j++){
           if (matriz[i][j].tipo == 1){
               printf("Nombre: %s\n", matriz[i][j].valor.persona.nombre);
               printf("Edad: %d\n", matriz[i][j].valor.persona.edad);
           }
           else if (matriz[i][j].tipo == 2){
               printf("Producto: %s\n", matriz[i][j].valor.producto.productos);
               printf("Precio: %.2f\n", matriz[i][j].valor.producto.precio);
           }
       }
    }
}