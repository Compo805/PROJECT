#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b;
    int a = 0;
    printf("Enter a number :")
    scanf("%d" , &b);
    while (b > a)
    {
        printf("%d\n" , a);
        a = a + 1;
    }
    return 0;
}
