#include "fun.h"
#include <stdio.h>

int main(void)
{
    while (1)
    {
        int ch, not = 0, noc = 0, nor = 0, nob = 0, amount = 0, count = 0;
        printf("\n\n\n 1.Enter bus/truck");
        printf("\n 2.Enter car/jeep");
        printf("\n 3.Enter rikshaw");
        printf("\n 4.Enter bike");
        printf("\n 5.check status");
        printf("\n 6.clear data");
        printf("\n 7.exit");
        printf("\n Enter your choice: ");
        scanf("%d", &ch);
        menu(ch);
    }
    return 0;
}