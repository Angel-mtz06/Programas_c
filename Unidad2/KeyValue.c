#include <stdio.h>
#include <string.h>

struct KeyValue
{
    char key[50];
    char value[50];
};
int main(){
    struct KeyValue tabla[3] = {
        {"usuario", "Juan"},
        {"password", "1234"},
        {"servidor", "localhost"}
    };
printf("Tabla clave\n");
for(int i = 0; i < 3; i++){
    printf("Clave: %s, Valor: %s\n", tabla[i].key, tabla[i].value);
}
}