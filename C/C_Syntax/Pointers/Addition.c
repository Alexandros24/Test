#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[] = {2, 3, 4, 1, 234, 3};
    int n = sizeof(a) / sizeof(a[0]);
    int *p = &a[0];
    int x = 12;
    int *ptr = &x;
    *ptr = *ptr + 2;
    printf("%d\n", *ptr);
    printf("%d\n%d\n%p\n", *p, n, &p);
    return 0;
}