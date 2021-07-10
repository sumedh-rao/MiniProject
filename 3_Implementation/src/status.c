#include "fun.h"
#include <stdio.h>

int status(void)
{
    int not = 0, noc = 0, nor = 0, nob = 0, count = 0, amount = 0;
    printf("\nNumber of Bus/Truck=%d", not );
    printf("\nNumber of car/Jeep=%d", noc);
    printf("\nNumber of rikshaw=%d", nor);
    printf("\nNumber of bike=%d", nob);
    printf("\nTotal Number of vehicles=%d", count);
    printf("\nTotal amount=%d", amount);
    return 0;
}