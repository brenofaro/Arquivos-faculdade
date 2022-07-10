#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");
    int x,y,z;
    char resposta[2];
    printf("Digite o valor de x: \n");
    scanf("%d", &x);
    printf("Digite o valor de y: \n");
    scanf("%d", &y);

    z = (x * y) + 5;

    if (z <= 0) {
        strcpy(resposta, "A");
    }
    else {
        if (z<= 100) {
           strcpy(resposta, "B");
        }
        else {
            strcpy(resposta, "C");
        }
    }
    printf("O valor de z é = %d\n"
           "A resposta é = %s\n", z, resposta);

    system("pause");
}
