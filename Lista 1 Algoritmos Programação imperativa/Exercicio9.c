#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");
    int cont, soma = 0, valor;

    for (cont=0;cont<10;cont++) {
        printf("Digite um valor: \n");
        scanf("%d", &valor);
        soma = soma + valor;
    }
    printf("Valor da soma é = %d\n", soma);
    system("pause");
}

