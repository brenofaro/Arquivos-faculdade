#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");
    int distancia = 0, i = 0, meta = 0;

    for (i=1; i<8; i++) {
        printf("Digite a dist�ncia percorrida no %d� dia em kilometros\n", i);
        scanf("%d", &distancia);
        if (distancia >= 8) {
            meta ++;
        }
    }
    if (meta >= 5) {
        printf("Desempenho �timo, a meta foi cumprimda em %d dias\n", meta);
    }
    else if (meta == 3 || meta == 4) {
        printf("Desempenho razo�vel, a meta foi cumprimda em %d dias\n", meta);
    }
    else {
        printf("Desempenho ruim, a meta foi cumprimda apenas em %d dias\n", meta);
    }
    system("pause");
}

