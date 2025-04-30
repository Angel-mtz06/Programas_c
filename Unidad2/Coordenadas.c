#include <stdio.h> //importacion de la libreria stdio.h para imprimir y usar el scanf
#include <math.h> //importacion de la libreria math.h para usar la funcion sqrt//
struct Triangulo{
int x1;
int y1;
int x2;
int y2;
int x3;
int y3;
float perimetro;
float area;
};//se crea la estructura Triangulo con los campos x1, y1, x2, y2, x3, y3, perimetro y area
struct Cuadrilatero{
    int x1;
    int y1;
    int x2;
    int y2;
    int x3;
    int y3;
    int x4;
    int y4;
    float perimetro;
    float area;
};//se crea la estructura Cuadrilatero con los campos x1, y1, x2, y2, x3, y3, x4, y4, perimetro y area
int main (){
int opcion;//se declara la variable opcion
printf("Seleccione la figura que desea calcular\n 1. Triangulo\n 2. Cuadrado\n");
scanf("%d",&opcion);//se pide al usuario que ingrese la opcion deseada
switch (opcion){//se crea un switch para seleccionar la opcion deseada
case 1://   si la opcion es 1, se calculan los datos de un triangulo

    struct Triangulo arreglo[4];//se crea un arreglo de estructuras Triangulo con cuatro elementos
    for (int i = 0; i <4; i++)//se crea un ciclo for para pedir las coordenadas de los triangulos
    {
        printf("Ingrese las coordenadas del triangulo %d\n", i+1);//se imprime el mensaje "Ingrese las coordenadas del triangulo i"
        printf("x1: ");//se imprime el mensaje "x1: "
        scanf("%d",&arreglo[i].x1);//se pide al usuario que ingrese el valor de x1
        printf("y1: ");//se imprime el mensaje "y1: "
        scanf("%d",&arreglo[i].y1);//se pide al usuario que ingrese el valor de y1
        printf("x2: ");
        scanf("%d",&arreglo[i].x2);
        printf("y2: ");
        scanf("%d",&arreglo[i].y2);
        printf("x3: ");
        scanf("%d",&arreglo[i].x3);
        printf("y3: ");
        scanf("%d",&arreglo[i].y3);//continua asi hasta llegar a y3

    }
    for (int i =0 ;i<4;i++ ){//se crea un ciclo for para calcular el perimetro y el area de los triangulos
        float lado1 = sqrt(pow(arreglo[i].x2-arreglo[i].x1, 2) + pow(arreglo[i].y2-arreglo[i].y1, 2));//se calcula la longitud del lado 1 del triangulo
        float lado2 = sqrt(pow(arreglo[i].x3-arreglo[i].x2, 2) + pow(arreglo[i].y3-arreglo[i].y2, 2));//se calcula la longitud del lado 2 del triangulo
        float lado3 = sqrt(pow(arreglo[i].x1-arreglo[i].x3, 2) + pow(arreglo[i].y1-arreglo[i].y3, 2));//se calcula la longitud del lado 3 del triangulo
        float semiperimetro = (lado1+lado2+lado3)/2;//se calcula el semiperimetro del triangulo
        arreglo[i].perimetro = lado1+lado2+lado3;//se guarda el valor del perimetro en el campo perimetro de la estructura
        arreglo[i].area = sqrt(semiperimetro*(semiperimetro-lado1)*(semiperimetro-lado2)*(semiperimetro-lado3));//se guarda el valor del area en el campo area de la estructura

    }
    printf("x1|y1|x2|y2|x3|y3|Perimetro|Area\n");//se imprime la cabecera de la tabla
    for (int i =0 ;i<4;i++ ){//se crea un ciclo for para imprimir los valores de x1, y1, x2, y2, x3, y3, perimetro y area de los triangulos
        printf("%2d|%2d|%2d|%2d|%2d|%2d|%4.2f|%4.2f\n", arreglo[i].x1, arreglo[i].y1, arreglo[i].x2, arreglo[i].y2, arreglo[i].x3, arreglo[i].y3, arreglo[i].perimetro, arreglo[i].area);
    }//se imprime los valores de x1, y1, x2, y2, x3, y3, perimetro y area de los triangulos
    break;//se sale del switch

case 2:
struct Cuadrilatero arreglo2[4] = {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };//se crea un arreglo de estructuras Cuadrilatero con cuatro elementos
    for (int i =0; i<4 ;i++){//se crea un ciclo for para pedir las coordenadas de los cuadrilateros
        printf("Ingrese las coordenadas del cuadrilatero %d\n", i+1);//se imprime el mensaje "Ingrese las coordenadas del cuadrilatero i"
        printf("Cuadrante 1: \nx1: ");//se imprime el mensaje "Cuadrante 1: \nx1: "
        scanf("%d",&arreglo2[i].x1);//se pide al usuario que ingrese el valor de x1
        printf("y1: ");//se imprime el mensaje "y1: "
        scanf("%d",&arreglo2[i].y1);//se pide al usuario que ingrese el valor de y1
        printf("Cuadrante 2: \nx2: ");
        scanf("%d",&arreglo2[i].x2);
        printf("y2: ");
        scanf("%d",&arreglo2[i].y2);
        printf("Cuadrante 3: \nx3: ");
        scanf("%d",&arreglo2[i].x3);
        printf("y3: ");
        scanf("%d",&arreglo2[i].y3);
        printf("Cuadrante 4: \nx4: ");
        scanf("%d",&arreglo2[i].x4);
        printf("y4: ");
        scanf("%d",&arreglo2[i].y4);//continua asi hasta llegar a y4
    }
    for (int i=0;i<4;i++ ){//se crea un ciclo for para calcular el perimetro y el area de los cuadrilateros

        float lado1 = sqrt(pow(arreglo2[i].x2-arreglo2[i].x1, 2) + pow(arreglo2[i].y2-arreglo2[i].y1, 2));//se calcula la longitud del lado 1 del cuadrilatero
        float lado2 = sqrt(pow(arreglo2[i].x3-arreglo2[i].x2, 2) + pow(arreglo2[i].y3-arreglo2[i].y2, 2));//se calcula la longitud del lado 2 del cuadrilatero
        float lado3 = sqrt(pow(arreglo2[i].x4-arreglo2[i].x3, 2) + pow(arreglo2[i].y4-arreglo2[i].y3, 2));//se calcula la longitud del lado 3 del cuadrilatero
        float lado4 = sqrt(pow(arreglo2[i].x1-arreglo2[i].x4, 2) + pow(arreglo2[i].y1-arreglo2[i].y4, 2));//se calcula la longitud del lado 4 del cuadrilatero
        arreglo2[i].perimetro = lado1+lado2+lado3+lado4;//se guarda el valor del perimetro en el campo perimetro de la estructura
        arreglo2[i].area = 0.5 * fabs(arreglo2[i].x1*arreglo2[i].y2 + arreglo2[i].x2*arreglo2[i].y3 + arreglo2[i].x3*arreglo2[i].y4 + arreglo2[i].x4*arreglo2[i].y1 - arreglo2[i].y1*arreglo2[i].x2 - arreglo2[i].y2*arreglo2[i].x3 - arreglo2[i].y3*arreglo2[i].x4 - arreglo2[i].y4*arreglo2[i].x1);//se guarda el valor del area en el campo area de la estructura
    }
    printf("x1|y1|x2|y2|x3|y3|x4|y4|Perimetro|Area\n");//se imprime la cabecera de la tabla
    for (int i =0 ;i<4;i++ ){//se crea un ciclo for para imprimir los valores de x1, y1, x2, y2, x3, y3, x4, y4, perimetro y area de los cuadrilateros
        printf("%d|%d|%d|%d|%d|%d|%d|%d|%.2f|%.2f\n", arreglo2[i].x1, arreglo2[i].y1, arreglo2[i].x2, arreglo2[i].y2, arreglo2[i].x3, arreglo2[i].y3, arreglo2[i].x4, arreglo2[i].y4, arreglo2[i].perimetro, arreglo2[i].area);
    }//se imprime los valores de x1, y1, x2, y2, x3, y3, x4, y4, perimetro y area de los cuadrilateros
    break;//se sale del switch  
default://si la opcion no es 1 ni 2, se imprime un mensaje de error
    printf("Opcion no valida\n");//se imprime el mensaje "Opcion no valida"
}

return 0;//se retorna 0 para indicar que el programa se ejecuto correctamente
}