#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");
    float val1, val2;

    printf("Digite o 1 valor: \n");
    scanf("%f", &val1);
    printf("Digite o 2 valor: \n");
    scanf("%f", &val2);
    while (val2 == 0){
        printf("Digite um valor diferente de 0: \n");
        scanf("%f", &val2);
    }
    printf("A divisão de %.2f com %.2f é = %.2f\n", val1, val2, val1 / val2);
    system("pause");
}

