#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b;
    printf("Enter a value :");
    scanf("%d" , &b);
    if (b < 0)
    {
     printf("The value is negative\n");
    }
    return 0;
}
