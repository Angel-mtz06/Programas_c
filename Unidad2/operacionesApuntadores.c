#include <stdio.h>

int main() {
    int fno, sno, *ptr, *qtr;
    int sum, res, mul;
    float div;

    printf("Primer número: ");
    scanf("%d", &fno);

    printf("Segundo número: ");
    scanf("%d", &sno);

    ptr = &fno;
    qtr = &sno;

    sum = *ptr + *qtr;
    printf("Suma: %d\n", sum);

    res = *ptr - *qtr;
    printf("Resta: %d\n", res);

    mul = (*ptr) * (*qtr);
    printf("Multiplicación: %d\n", mul);

    if (*qtr != 0) {
        div = (float)(*ptr) / (*qtr);
        printf("División: %.2f\n", div);
    } else {
        printf("No se puede dividir entre 0.\n");
    }

    return 0;
}
