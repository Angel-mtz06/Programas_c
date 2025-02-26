#include <stdio.h>
int main(){
int opc;
printf("Seleccione una opcion\n");
printf("1.- Suma\n"); 
printf("2.- Resta\n");
scanf("%d", &opc);
switch(opc){

    case 1:
        printf("Selecciono la SUMA 1\n"); 
        break;
    case 2:
        printf("Selecciono la RESTA 2\n");
        break;
    default:
        printf("Opcion no valida\n");
        break;
}}