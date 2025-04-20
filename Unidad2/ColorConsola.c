#include <stdio.h>
void set_color(const char* color){
    printf("%s",color);
}

int main (){
printf("\033[2J");
set_color("\033[4;36m");
printf("Bienvenidos a la consola de colores\n");
set_color("\033[0m");
set_color("\033[7;34m");
printf("Bienvenidos a la consola de colores\n");
set_color("\033[0m");
set_color("\033[4;34m");
printf("Bienvenidos a la consola de colores\n");
return 0;

}

