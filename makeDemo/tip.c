#include <stdio.h>
#include <math.h>
#include "get_double.h"

// get_double from user as x, y


int main()
{
    double price, tip;

    double tipAmt = price * tip / 100;
    double total = price + tipAmt;

    printf("Tip amount: %lf\n", tipAmt);
    printf("Total amount: %lf\n", total);

    return 0;
}

