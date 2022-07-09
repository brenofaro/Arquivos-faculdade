#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");
    float valor;
    scanf("%f", &valor);
    if (valor >= 0) {
        printf("O valor é Positivo\n");
    }else{
        printf("O valor é Negativo\n");
    }
    system("pause");
}

