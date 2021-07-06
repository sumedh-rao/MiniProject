#include "fun.h"
#include <stdio.h>

int menu()
{
    int ch;
    printf("\n\n\n 1.Enter bus/truck");
    printf("\n 2.Enter car/jeep");
    printf("\n 3.Enter rikshaw");
    printf("\n 4.Enter bike");
    printf("\n 5.check status");
    printf("\n 6.clear data");
    printf("\n 7.exit");
    printf("\n Enter your choice: ");
    scanf("%d", &ch);
    return (ch);
}