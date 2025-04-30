#include <stdio.h>

int main() {
    int a, b, c, d, e;
    int *pa, *pb, *pc, *pd, *pe;
    
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &c);
    printf("Ingrese el cuarto numero: ");
    scanf("%d", &d);
    printf("Ingrese el quinto numero: ");
    scanf("%d", &e);
    
    pa = &a;
    pb = &b;
    pc = &c;
    pd = &d;
    pe = &e;
    
    int suma, resta, multiplicacion;
    float division;
    
    suma = *pa + *pb;
    printf("La suma es: %d\n", suma);
    
    resta = *pa - *pb;
    printf("La resta es: %d\n", resta);
    
    multiplicacion = *pa * *pb;
    printf("La multiplicacion es: %d\n", multiplicacion);
    
    division = (float)(*pa) / (*pb); 
    printf("La division es: %.2f\n", division);
    
    *pa = suma;
    printf("El nuevo valor de a es: %d\n", *pa);
    
    *pb = resta;
    printf("El nuevo valor de b es: %d\n", *pb);
    
    *pc = multiplicacion;
    
    *pd = (int)division;
    printf("El nuevo valor de d es: %d\n", *pd);

    return 0;
}
