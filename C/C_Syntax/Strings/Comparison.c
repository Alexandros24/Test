#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "a";
    char str2[] = "A";
    int x = strcmp(str, str2); // if str > str2 then outpout > 0 and vice versa...
    printf("%d", x);
    return 0;
}