#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, *q;
    p = (int *)malloc(sizeof(int));
    q = p;
    *p = 10;
    printf("%d\n" , *q);
    *q = 10;
    printf("%d\n" , *q);


    p = (int *)malloc(sizeof(int));
    q = (int *)malloc(sizeof(int));
    *p = 10;
    *q = 20;
    *p = *q;
    printf("%d\n" , *p);
    return 0;
}
