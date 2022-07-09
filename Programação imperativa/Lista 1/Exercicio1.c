#include <stdio.h>
#include <stdlib.h>

void main() {
    int A, B;
    A = 10;
    B = 20;

    A = B + A;
    B = A - B;
    A = A - B;

    printf("%d %d", A, B);
    system("pause");
}
