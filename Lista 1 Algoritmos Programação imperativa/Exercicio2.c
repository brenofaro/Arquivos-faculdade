#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");
    int base, altura;
    scanf("%d %d", &base, &altura);

    printf("Área do Retângulo = %d\n", (base * altura));
    system("pause");
}

