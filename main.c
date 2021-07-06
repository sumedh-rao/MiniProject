#include "fun.h"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    while (1)
    {
        switch (menu())
        {
        case 1:
            truck();
            break;
        case 2:
            car();
            break;
        case 3:
            rikshaw();
            break;
        case 4:
            bike();
            break;
        case 5:
            status();
            break;
        case 6:
            clear();
            break;
        case 7:
            exit(0);
        default:
            printf("\n Enter correct option");
        }
    }
    getch();
}