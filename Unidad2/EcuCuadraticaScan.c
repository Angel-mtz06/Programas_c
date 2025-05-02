#include <stdio.h> //importacion de la libreria stdio.h para imprimir y usar el scanf
#include <math.h> //importacion de la libreria math.h para usar la funcion sqrt
#include <string.h> //importacion de la libreria string.h para usar la funcion strcpy
struct ECuadratica{
    int a;
    int b;
    int c;
    int discriminante;
    float x1;
    float x2;
    char solucion[50];
}; //se crea la estructura ECuadratica con los campos a, b, c, discriminante, x1, x2 y solucion
int main (){
    
    struct ECuadratica arreglo[] = {
        {0, 0, 0, 0, 0, 0, ""},
        {0, 0, 0, 0, 0, 0, ""}
    }; //se crea un arreglo de estructuras ECuadratica con dos elementos
    for (int i = 0; i < 2; i++) //se crea un ciclo for para pedir los valores de a, b y c de las ecuaciones cuadraticas
    {   
        printf("Ingrese los valores de a, b y c para la ecuacion cuadratica %d\n", i+1);
        printf("a: ");
        scanf("%d",&arreglo[i].a);
        printf("b: ");
        scanf("%d",&arreglo[i].b);
        printf("c: ");
        scanf("%d",&arreglo[i].c);
    }

for (int i =0 ;i<2;i++ ){
    int d = pow(arreglo[i].b,2) - 4*arreglo[i].a*arreglo[i].c; //se calcula el discriminante de la ecuacion cuadratica
    arreglo[i].discriminante = d; //se guarda el valor del discriminante en el campo discriminante de la estructura
    
    if (d<0){ //si el discriminante es menor a 0, la ecuacion no tiene solucion en los reales
        strcpy(arreglo[i].solucion ,"No tiene solucion");//se copia el mensaje "No tiene solucion" en el campo solucion de la estructura
    }
    else {//si el discriminante es mayor o igual a 0, la ecuacion tiene solucion en los reales
        arreglo[i].x1 = (-arreglo[i].b + sqrt(d)) / (2 * arreglo[i].a);//se calcula la solucion x1 de la ecuacion cuadratica
        arreglo[i].x2 = (-arreglo[i].b - sqrt(d)) / (2 * arreglo[i].a);//se calcula la solucion x2 de la ecuacion cuadratica
        strcpy(arreglo[i].solucion, "Tiene solucion");
    }
    }
    printf("a|b|c|  x1 |  x2 |Solucion\n");//se imprime la cabecera de la tabla
    for (int i =0 ;i<2;i++ ){//se crea un ciclo for para imprimir los valores de a, b, c, x1, x2 y solucion de las ecuaciones cuadraticas
        printf("%d|%d|%d|%.2f|%.2f|%s\n", arreglo[i].a, arreglo[i].b, arreglo[i].c, arreglo[i].x1, arreglo[i].x2, arreglo[i].solucion);
    }

return 0;//se retorna 0 para indicar que el programa se ejecuto correctamente
}