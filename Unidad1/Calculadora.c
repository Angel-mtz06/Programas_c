#include <stdio.h>
int main (){
int opcion;
float num1, num2, resultado;
printf("elige una opcion\n");
printf("1.- Suma\n");
printf("2.- Resta\n");
printf("3.- Multiplicacion\n");
printf("4.- Division\n");
 scanf("%d",&opcion);
printf("Introduce el primer numero\n");
 scanf("%f",&num1);  
printf("Introduce el segundo numero\n");
 scanf("%f",&num2);
switch(opcion){
case 1:
    resultado = num1 + num2;
    printf("El resultado de la suma es: %.2f\n",resultado);
    break;
case 2:
    resultado = num1 - num2;
    printf("El resultado de la resta es: %.2f\n",resultado);
    break;
case 3:
    resultado = num1 * num2;
    printf("El resultado de la multiplicacion es: %.2f\n",resultado);
    break;
case 4:
 if(num2 == 0){
    printf("No se puede dividir entre 0\n");
    break;}
 else{
     resultado = num1 / num2;
     printf("El resultado de la division es: %.2f\n",resultado);
     break;
default:
    printf("Opcion no valida\n");
    break;
}

}}