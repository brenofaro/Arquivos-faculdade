#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");
    int cod, ano_nasc, ano_ingresso, idade, tempo_trabalho;

    printf("Digite o número do empregado: \n");
    scanf("%d", &cod);
    printf("Digite o ano de nascimento: \n");
    scanf("%d", &ano_nasc);
    printf("Digite o ano de ingresso na empresa: \n");
    scanf("%d", &ano_ingresso);

    idade = 2022 - ano_nasc;
    tempo_trabalho = 2022 - ano_ingresso;

    printf("Idade: %d anos\n"
           "Tempo de trabalho: %d anos\n", idade, tempo_trabalho);

    if (idade >= 65 || tempo_trabalho >= 30) {
        printf("Requerer aposentadoria!\n");
    }
    else if (idade >= 60 && tempo_trabalho >= 25) {
        printf("Requerer aposentadoria!\n");
    }
    else {
        printf("Não requerer aposentadoria!\n");
    }
    system("pause");
}
