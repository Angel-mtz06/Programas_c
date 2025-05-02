#include <math.h>
#include <stdio.h>
struct Coordenadas
{
    int x;
    int y;

};
int main(){

    int opcion;
    printf("Selecciona la opcion");
    printf("\n1.-Triangulo");
    printf("\n2.-Cuadrado");
    scanf("%d", &opcion);
    switch (opcion)
    {
        case 1: 
        struct Coordenadas arreglo[3];
    
        for (int i = 0; i < 3 ; i++)
        {
            int pos=i+1;
            printf("Ingresa la cordenada x: ", pos);
            scanf("%d", &arreglo[i].x);
            printf("Ingresa la cordenada y: ", pos);
            scanf("%d", &arreglo[i].y);

        }
        float lado1 = sqrt(pow(arreglo[1].x-arreglo[0].x,2)+pow(arreglo[1].y-arreglo[0].y,2));
        float lado2 = sqrt(pow(arreglo[2].x-arreglo[1].x,2)+pow(arreglo[2].y-arreglo[1].y,2));
        float lado3 = sqrt(pow(arreglo[0].x-arreglo[2].x,2)+pow(arreglo[0].y-arreglo[2].y,2));
        float perimetro = lado1+lado2+lado3;
        float s = perimetro/2;
        float Area = sqrt(s*(s-lado1)*(s-lado2)*(s-lado3));
        printf("El perimetro es: %f", perimetro);
        printf("El area es: %f", Area);
        break;
        case 2:
            struct Coordenadas arreglo2[4];
            for (int i = 0; i < 4 ; i++)
            {
                int pos=i+1;
                printf("Ingresa la cordenada x: ", pos);
                scanf("%d", &arreglo2[i].x);
                printf("Ingresa la cordenada y: ", pos);
                scanf("%d", &arreglo2[i].y);

            }
            float lado12 = sqrt(pow(arreglo2[1].x-arreglo2[0].x,2)+pow(arreglo2[1].y-arreglo2[0].y,2));
            float lado22 = sqrt(pow(arreglo2[2].x-arreglo2[1].x,2)+pow(arreglo2[2].y-arreglo2[1].y,2));
            float lado32 = sqrt(pow(arreglo2[3].x-arreglo2[2].x,2)+pow(arreglo2[3].y-arreglo2[2].y,2));
            float lado42 = sqrt(pow(arreglo2[0].x-arreglo2[3].x,2)+pow(arreglo2[0].y-arreglo2[3].y,2));
            float perimetro2 = lado12+lado22+lado32+lado42;
            float Area2 = lado12*lado22;
            printf("El perimetro es: %f", perimetro2);
            printf("El area es: %f", Area2);
            break;
        default:
            break;

    }
}