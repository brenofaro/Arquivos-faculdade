#include <stdio.h>

int main()
{
    int i, day[7], goal = 8;
    int good = 0, bad = 0, ok = 0;

    for (i = 0; i < 7; i++)
    {
        scanf("%d", &day[i]);
        if (day[i] >= goal)
        {
            good++;
        }
        else
        {
            bad++;
        }
    }

    if (good >= 5)
    {
        printf("Desempenho ótimo");
    }
    else if (good == 3 || good == 4)
    {
        printf("Desempenho razoável");
    }
    else
    {
        printf("Desempenho ruim");
    }

    return 0;
}
