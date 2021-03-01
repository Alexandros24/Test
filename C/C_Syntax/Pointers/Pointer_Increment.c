#include <stdio.h>

int main() // SAME FOR DECREMENT
{
    int a[] = {1, 234, 12};
    int *p = &a[0];
    printf("%d \n", ++*p); // a[0] + 1
    printf("%d ", *(++p)); // a[++0]
    return 0;
}