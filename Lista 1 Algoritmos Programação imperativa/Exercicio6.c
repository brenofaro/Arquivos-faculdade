#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");
    int horas_mensal, sal_por_hora, sal_total;

    printf("Horas trabalhadas no m�s: ");
    scanf("%d", &horas_mensal);
    printf("Valor do sal�rio por hora: ");
    scanf("%d", &sal_por_hora);

    if (horas_mensal > 160) {
        sal_total = (160 * sal_por_hora) + (horas_mensal - 160)* (1.5 * sal_por_hora);
    }
    else {
        sal_total = horas_mensal * sal_por_hora;
    }

    printf("Valor total do sal�rio ser� de: %d\n", sal_total );
    system("pause");
}
