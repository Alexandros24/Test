#include <stdio.h>

int main()
{
    int x;
    for (x = 'A'; x <= 'Z'; x++)
    {    
        putchar(x);
        printf(" %d, ", x);
    }
    putchar(x);
    return 0;
}