#include <stdio.h>
#include <math.h>
#include <string.h>
struct ECuadratica{
    int a;
    int b;
    int c;
    int discriminante;
    float x1;
    float x2;
    char solucion[50];
};
int main (){
    struct ECuadratica arreglo[] = {
        {1, 5, 6, 0, 0, 0, ""},
        {1, 2, 1, 0, 0, 0, ""}
    };
for (int i =0 ;i<2;i++ ){
    int d = pow(arreglo[i].b,2) - 4*arreglo[i].a*arreglo[i].c;
    arreglo[i].discriminante = d;
    
    if (d<0){
        strcpy(arreglo[i].solucion ,"No tiene solucion");
    }
    else {
        arreglo[i].x1 = (-arreglo[i].b + sqrt(d)) / (2 * arreglo[i].a);
        arreglo[i].x2 = (-arreglo[i].b - sqrt(d)) / (2 * arreglo[i].a);
        strcpy(arreglo[i].solucion, "Tiene solucion");
    }
    }
    printf("a|b|c|  x1 |  x2 |Solucion\n");
    for (int i =0 ;i<2;i++ ){
        printf("%d|%d|%d|%.2f|%.2f|%s\n", arreglo[i].a, arreglo[i].b, arreglo[i].c, arreglo[i].x1, arreglo[i].x2, arreglo[i].solucion);
    }

return 0;
}