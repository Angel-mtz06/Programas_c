#include <stdio.h>
int main(){
    int num1, num2;
    int *ptr1, *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    printf("%p\n", ptr1);
    printf("%p\n", ptr2);

    num1 = 10;
    num2 = 20;

    ptr1 = ptr2;
    ptr2 = NULL;
    printf("%p\n", ptr1);
    printf("%p\n", ptr2);
}