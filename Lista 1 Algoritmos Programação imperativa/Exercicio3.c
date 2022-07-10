#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");
    float cfabrica, distribuidor, impostos, cfinal;
    distribuidor = 0.28;
    impostos = 0.45;

    printf("Digite o custo de fábrica: ");
    scanf("%f", &cfabrica);

    cfinal = cfabrica * (1 + distribuidor + impostos);

    printf("O custo final será: %.2f\n", cfinal);


    system("pause");
}

