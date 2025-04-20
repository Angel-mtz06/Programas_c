#include <stdio.h>

void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}

void setColor(const char* color) {
    printf("%s", color);
}
void limpiarPantalla() {
    gotoxy(0, 2); 
    printf("\033[2J"); 
}

int main() {
    int opcion;

    setColor("\033[4;32m");
    gotoxy(10, 5);
    printf("Banderas\n\n");

    setColor("\033[4;34m");
    printf("Menu de opciones\n");

    setColor("\033[7;31m");  
    printf("1.");
    setColor("\033[0m");    
    printf("Triangulo de colores\n");

    setColor("\033[7;32m"); 
    printf("2.");
    setColor("\033[0m");    
    printf("Bandera de Mexico\n");

    setColor("\033[7;33m");  
    printf("3.");
    setColor("\033[0m");   
    printf("Bandera de E.U\n");

    setColor("\033[7;34m");
    printf("4.");
    setColor("\033[0m");    
    printf("Cuadrado de colores\n");

    scanf("%d", &opcion);
    setColor("\033[0m");
    switch(opcion) {
        case 1:
            int filas = 5;
        
            for (int i = 1; i <= filas; i++) {
                for (int j = 1; j <= filas - i; j++) {
                    setColor("\033[0m"); 
                    printf(" "); 
                }
                for (int k = 1; k <= (2 * i - 1); k++) {
                    setColor("\033[7;34m");
                    printf("*");
                }
                printf("\n");
                setColor("\033[0m");
            }
            break;
            limpiarPantalla();

        case 2:
                       for (int i = 0; i < 5; i++) {
                        for (int j = 0; j < 30; j++) {
                            if (j < 10) {
                                setColor("\033[7;32m");  
                                printf(" ");
                            } else if (j >= 10 && j < 20) {
                                setColor("\033[7;37m"); 
                                printf(" ");
                            } else {
                                setColor("\033[7;31m");  
                                printf(" ");
                            }
                        }
                        printf("\n");
                    }
                    setColor("\033[0m");

                    break;
            limpiarPantalla();
        case 3:
                    
                    for (int i = 0; i < 13; i++) {
                        for (int j = 0; j < 20; j++) {
                            if (i < 7 && j < 10) {
                                setColor("\033[7;34m");  
                                printf(" ");
                            } else if (i % 2 == 0) {
                                setColor("\033[7;31m"); 
                                printf(" ");
                            } else {
                                setColor("\033[7;37m"); 
                                printf(" ");
                            }
                        }
                        printf("\n");
                    }
                    setColor("\033[0m");

                    break;
        

                    limpiarPantalla();

        case 4:
        int opcion2;
        printf("Ingrese el color: ");
        printf("\n1. Rojo\n2. Verde\n3. Azul\n4. Amarillo\n5. Blanco\n");
        scanf("%d", &opcion2);
        printf("\033[2J"); 
        if (opcion2 == 1) {
            setColor("\033[7;31m");
        } else if (opcion2 == 2) {
            setColor("\033[7;32m");
        } else if (opcion2 == 3) {
            setColor("\033[7;34m");
        } else if (opcion2 == 4) {
            setColor("\033[7;33m");
        } else if (opcion2 == 5) {
            setColor("\033[7;37m");
        } else {
            printf("Opcion no valida\n");
            return 0;
        }
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 5; j++) {
               
                
                printf(" ");
            }
            printf("\n");
        }
        setColor("\033[0m");

            break;
            limpiarPantalla();

        default:
            printf("Opcion no valida\n");
            break;
            limpiarPantalla();

    }

    return 0;

}
