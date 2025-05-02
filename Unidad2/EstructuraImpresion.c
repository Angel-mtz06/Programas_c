#include <stdio.h>
struct Direccion{
    char calle [50];
    int numero;
};
struct Persona{
    char nombre[50];
    struct Direccion domicilio;
};
int main (){

int n;
printf("Ingrese el numero de personas: ");
scanf("%d", &n);
getchar();
struct Persona personas[n];
for (int i = 0;i<n;i++){
    printf("ingrese los datos de la persona %d\n", i+1);
    printf("Nombre: ");
    scanf(" %[^\n]", personas[i].nombre);
    printf("Calle: ");
    scanf(" %[^\n]", personas[i].domicilio.calle);
    printf("Numero: ");
    scanf("%d", &personas[i].domicilio.numero);
    getchar();


}
for (int i = 0;i<n;i++){
    printf("Nombre | Calle | Numero|\n");
    printf("%-6s | %-6s | %-6d\n", personas[i].nombre, personas[i].domicilio.calle, personas[i].domicilio.numero);

}
}