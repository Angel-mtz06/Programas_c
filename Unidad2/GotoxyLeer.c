#include <stdio.h>
 
void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}
 
// Función para cambiar el color
void setColor(const char* color) {
    printf("%s", color);
}
 
int main() {
    char nombre[50];
    int edad;
 
    printf("\033[2J"); // Limpia la pantalla
    setColor("\033[7;34m");
 
    gotoxy(10, 5);
    printf("Ingrese su nombre: ");
    gotoxy(30, 5);
    setColor("\033[7;35m");
    scanf("%s", nombre);
 
    setColor("\033[7;34m");
    gotoxy(10, 7);
    printf("Ingrese su edad: ");
    gotoxy(30, 7);
    setColor("\033[7;35m");
    scanf("%d", &edad);
 
    gotoxy(10, 9);
    printf("Hola %s, tienes %d años.\n", nombre, edad);
 
 return 0;
}