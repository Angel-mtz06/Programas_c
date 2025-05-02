#include <stdio.h>
struct Juguete {
    int id;
    char njuguete[50];
    float precio;
    int cantidad;
    char marca[50];
    char genero[50];
    float peso;
    float tamano;
    char material[50];
    int ventas;
    int stockd;
    char color[50];
};

int main (){
    int n;
    printf("Ingrese el numero de juguetes: ");
    scanf("%d", &n);
    struct Juguete juguetes[n];
    for (int i = 0;i<n;i++){
        printf("ingrese los datos del juguete %d\n", i+1);
        printf("ID: ");
        scanf("%d", &juguetes[i].id);
        printf("Nombre: ");
        scanf(" %[^\n]", juguetes[i].njuguete);
        printf("Precio: ");
        scanf("%f", &juguetes[i].precio);
        printf("Cantidad: ");
        scanf("%d", &juguetes[i].cantidad);
        printf("Marca: ");
        scanf(" %[^\n]", juguetes[i].marca);
        printf("Genero: ");
        scanf(" %[^\n]", juguetes[i].genero);
        printf("Peso: ");
        scanf("%f", &juguetes[i].peso);
        printf("Tamano: ");
        scanf("%f", &juguetes[i].tamano);
        printf("Material: ");
        scanf(" %[^\n]", &juguetes[i].material);
        printf("Ventas: ");
        scanf("%d", &juguetes[i].ventas);
        printf("Stock disponible: ");
        scanf("%d", &juguetes[i].stockd);
        printf("Color: ");
        scanf(" %[^\n]", juguetes[i].color);
    }
    printf("\n| ID |              Nombre              | Precio | Cantidad | Marca | Genero | Peso | Tamaño | Material | Ventas | Stock disponible | Color\n");

    for (int i = 0;i<n;i++){
        printf("|%-3d | %-32s | %-6.2f | %-8d | %-5s | %-6s | %-5.2f | %-5.2f | %-6.2f | %-6d | %-6d | %-6s\n", juguetes[i].id, juguetes[i].njuguete, juguetes[i].precio, juguetes[i].cantidad, juguetes[i].marca, juguetes[i].genero, juguetes[i].peso, juguetes[i].tamano, juguetes[i].material, juguetes[i].ventas, juguetes[i].stockd, juguetes[i].color);
    
    }
}