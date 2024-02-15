#include <stdio.h>
#include <stdlib.h>
int main()
{
    const float POUND = 2.20462;
    printf("KILOGRAMS\t  POUNDS\n");
    for (int kg = 0; kg <= 100; kg = kg + 10)
    {
        float lbs = kg * POUND;
        printf("%.2f\t \t%.2f\n", (float)kg, lbs);
    }
    return 0;
}
