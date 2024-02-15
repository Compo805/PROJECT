#include <stdio.h>
#include <stdlib.h>

int main()
{
    double miles, meters;
    const double meters_per_mile = 1609.34;
    const int max_miles = 100;
    printf("Miles\t   Meters\n");
    for (miles = 0; miles <= max_miles; miles = miles + 10)
    {
        meters = miles * meters_per_mile;
        printf("%.2f\t %.2f\n", miles, meters);
    }
    return 0;
}
