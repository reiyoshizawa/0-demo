#include <stdio.h>
#include <math.h>
#include "get_double.h"

int main()
{
    double x = get_double("Enter the x value: ", -100, 100);
    double y = get_double("Enter the y value: ", -100, 100);

    double distance = sqrt(pow(x, 2) + pow(y, 2));
    printf("Distance from (%lf, %lf) to the origin is %lf\n", x, y, distance);
    
    return 0;
}

