#include <stdio.h>

int main()
{
    int a[2][2] = {1,2,3,4};
    int *p;
    printf("%d\n", **a);
    for (p = *a; p < *(a + 2); p++)
    {
        printf("%d\n", *p);
    }
    return 0;
}