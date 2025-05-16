#include <stdio.h>

int main() {
    int a, b, c, d, e, f, g, h;
    int *pa, *pb, *pc;

    printf("Ingrese el primer numero (a): ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero (b): ");
    scanf("%d", &b);
    printf("Ingrese el tercer numero (c): ");
    scanf("%d", &c);
    printf("Ingrese el cuarto numero (d): ");
    scanf("%d", &d);
    printf("Ingrese el quinto numero (e): ");
    scanf("%d", &e);
    printf("Ingrese el sexto numero (f): ");
    scanf("%d", &f);

    pc = &g;

    printf("\n|  PAR  | OPERACIÓN |  VALOR A |     &A     |  VALOR B |     &B     | RESULTADO |   &RESULTADO |\n");

    // --- Operaciones con a y b ---
    pa = &a;
    pb = &b;

    *pc = *pa + *pb;
    printf("|  a,b  |   SUMA    | %8d | %10p | %8d | %10p | %9d | %13p |\n", *pa, pa, *pb, pb, *pc, pc);

    *pc = *pa - *pb;
    printf("|  a,b  |  RESTA    | %8d | %10p | %8d | %10p | %9d | %13p |\n", *pa, pa, *pb, pb, *pc, pc);

    *pc = *pa * *pb;
    printf("|  a,b  |   MULT    | %8d | %10p | %8d | %10p | %9d | %13p |\n", *pa, pa, *pb, pb, *pc, pc);

    if (*pb != 0) {
        *pc = *pa / *pb;
    } else {
        *pc = 0;
    }
    printf("|  a,b  |   DIV     | %8d | %10p | %8d | %10p | %9d | %13p |\n", *pa, pa, *pb, pb, *pc, pc);

    // --- Operaciones con c y d ---
    pa = &c;
    pb = &d;

    *pc = *pa + *pb;
    printf("|  c,d  |   SUMA    | %8d | %10p | %8d | %10p | %9d | %13p |\n", *pa, pa, *pb, pb, *pc, pc);

    *pc = *pa - *pb;
    printf("|  c,d  |  RESTA    | %8d | %10p | %8d | %10p | %9d | %13p |\n", *pa, pa, *pb, pb, *pc, pc);

    *pc = *pa * *pb;
    printf("|  c,d  |   MULT    | %8d | %10p | %8d | %10p | %9d | %13p |\n", *pa, pa, *pb, pb, *pc, pc);

    if (*pb != 0) {
        *pc = *pa / *pb;
    } else {
        *pc = 0;
    }
    printf("|  c,d  |   DIV     | %8d | %10p | %8d | %10p | %9d | %13p |\n", *pa, pa, *pb, pb, *pc, pc);

    // --- Operaciones con e y f ---
    pa = &e;
    pb = &f;

    *pc = *pa + *pb;
    printf("|  e,f  |   SUMA    | %8d | %10p | %8d | %10p | %9d | %13p |\n", *pa, pa, *pb, pb, *pc, pc);

    *pc = *pa - *pb;
    printf("|  e,f  |  RESTA    | %8d | %10p | %8d | %10p | %9d | %13p |\n", *pa, pa, *pb, pb, *pc, pc);

    *pc = *pa * *pb;
    printf("|  e,f  |   MULT    | %8d | %10p | %8d | %10p | %9d | %13p |\n", *pa, pa, *pb, pb, *pc, pc);

    if (*pb != 0) {
        *pc = *pa / *pb;
    } else {
        *pc = 0;
    }
    printf("|  e,f  |   DIV     | %8d | %10p | %8d | %10p | %9d | %13p |\n", *pa, pa, *pb, pb, *pc, pc);

    return 0;
}
