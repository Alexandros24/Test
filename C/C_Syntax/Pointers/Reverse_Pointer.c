#include <stdio.h>
#define N 5

int main ()
{
    int a[N], *p;
    for (p=a; p<=a+N-1; p++)
        scanf("%d", p);
    for (p=a+N-1; p>=a; p--)
        printf("%d %p\n", *p, p);
    return 0;
}