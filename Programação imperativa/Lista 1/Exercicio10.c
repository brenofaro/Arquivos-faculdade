#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");
    int a,b,c;

    printf("Digite o valor do lado A: \n");
    scanf("%d", &a);
    printf("Digite o valor do lado B: \n");
    scanf("%d", &b);
    printf("Digite o valor do lado C: \n");
    scanf("%d", &c);
    if (a < b + c && b < a + c && c < a + b){
        if (a == b && b == c) {
            printf("Triângulo Equilátero\n");
        }
        else {
            if (a == b || b == c || a == c) {
                printf("Triângulo Isósceles\n");
            }
            else {
                printf("Triângulo Escaleno\n");
            }
        }
    }
    else {
        printf("Não é possível formar um triângulo\n");
    }
    system("pause");
}

