#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI (3.141592654)

int main()
{
    int i, samples = 1000;
    double n;
    double twoTimesPi = 2.0 * PI;
    double step;

    step = twoTimesPi / samples;
    for (i = 0; i < samples; i++)
    {
        n = sin(step * i);
        printf("%.8lf\n", n);
    }
    return 0;
}