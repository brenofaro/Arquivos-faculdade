#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");
    char nome[10];
    float preco_u, total, desconto, val_pagar;
    int qtd;

    printf("Digite o nome do produto: ");
    scanf("%s", &nome);
    printf("Digite a quantidade adquirida: ");
    scanf("%d", &qtd);
    printf("Digite o preço unitário: ");
    scanf("%f", &preco_u);

    total = qtd * preco_u;

    if (qtd <= 5) {
        desconto = total * 0.02;
        val_pagar = total - desconto;
    }
    else if (qtd > 5 && qtd < 10) {
        desconto = total * 0.03;
        val_pagar = total - desconto;
    }
    else{
        desconto = total * 0.05;
        val_pagar = total - desconto;
    }
    printf("Valor total da compra = R$%.2f\n"
           "Valor do desconto = R$%.2f\n"
           "Valor a pagar = R$%.2f\n", total, desconto, val_pagar);
    system("pause");
}

