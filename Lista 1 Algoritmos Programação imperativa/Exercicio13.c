#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int pessoas, cidade, quartos, total, valor_por_pessoa;
    printf("Quantidade de pessoas do grupo: \n");
    scanf("%d", &pessoas);
    printf("Qual cidade?\n"
           "1 Para Pipa\n"
           "2 para Fortaleza\n");
    scanf("%d", &cidade);

    if (cidade == 1) {
        printf("Quantidade de quartos desejada: \n");
        scanf("%d", &quartos);
        if (quartos == 2) {
            total = 600 + (pessoas * 75);
        }
        else if (quartos == 3) {
            total = 900 + (pessoas * 75);
        }
        else {
            printf("Número de quartos inválido!");
            return 1;
        }
    }
    else if (cidade == 2){
        printf("Quantidade de quartos desejada: \n");
        scanf("%d", &quartos);
        if (quartos == 3) {
            total = 950 + (pessoas * 60);
        }
        else if (quartos == 4) {
            total = 1120 + (pessoas * 60);
        }
        else {
            printf("Número de quartos inválido!");
            return 1;
        }
    }
    else{
        printf("Cidade Inválida!");
        return 1;
    }
    valor_por_pessoa = total / pessoas;
    printf("O valor total da viagem é R$%d,00\n"
           "Cada um irá pagar o valor de R$%d,00\n", total, valor_por_pessoa);

    system("pause");
}

