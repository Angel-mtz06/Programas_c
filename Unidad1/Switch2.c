#include <stdio.h>
int main (){
char opcion [1];
printf("elige una opcion\n");
printf("a-opcion 1\n");
printf("b-opcion 2\n");
scanf("%c",&opcion);
switch(opcion[0]){
case 'a':
    printf("Elegiste la opcion 1\n");
    break;
case 'b':
    printf("Elegiste la opcion 2\n");
    break;
default:
    printf("Opcion no valida\n");
    break;
}
}