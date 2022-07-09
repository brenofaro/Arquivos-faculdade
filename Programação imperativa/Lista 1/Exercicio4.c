#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");
    float nota1, nota2, nota3, media_final;
    printf("Digite a 1 nota: ");
    scanf("%f", &nota1);
    printf("Digite a 2 nota: ");
    scanf("%f", &nota2);
    printf("Digite a 3 nota: ");
    scanf("%f", &nota3);

    media_final = (nota1 * 2 + nota2 * 3 + nota3  * 5)/10;

    printf("A média final do aluno será: %.2f\n", media_final);
    system("pause");
}

