#include <stdio.h>
#include <stdlib.h>

struct rec
{
    int i;
    float f;
    char c;
};
int main()
{
    struct rec *p;
    p = (struct rec *) malloc (sizeof(struct rec));
    p->i=10;
    p->f=3.14;
    p->c='a';

    printf("%d %.2f %c\n" ,(*p). i ,(*p). f,(*p).c);
    free(p);
    return 0;
}
