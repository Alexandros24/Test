#include <stdio.h>

int main()
{
    int a;
    do
    {
        scanf("%i", &a);
    } while (a < 0 || a > 9);
    
    
    int  i = 0;
    while (i < 10)
    {
        printf("%d", i);
        i++;
    }
    return 0;
}