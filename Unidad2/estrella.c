#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - i + 4; j++) {
            printf(" "); 
        }

        for (int j = 0; j < 9 - (5 - i - 1) * 2; j++) {
            printf("*");
        }

        printf("\n");
    }
    for (int i = 0; i < 4; i++){

        for (int j = 0; j < i; j++){
            printf(" ");
        }
        for(int j = 0; j < 19 - (i ) * 2; j++){
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i<2; i++ ){
        printf(" ");
    }
    for(int i = 0; i<=14;i++){
        printf("*");
    }
    for (int i = 0; i < 5; i++){
        printf("\n");
        for(int k = 1; k > i; k--){
            printf(" ");
        }
        for(int k = 0; k < 5-i; k++){
            printf("*");
        }
        for(int k = 12; k > i; k--){
            printf(" ");
        }
        for(int k = 0; k < 5-i; k++){
            printf("*");
        }
    }
}
