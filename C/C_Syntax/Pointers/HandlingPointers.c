//https://www.w3resource.com/c-programming-exercises/pointer/index.php
#include <stdio.h>

int main()
{
    int m = 29, *ab;
    printf("Address of m: %d\nValue of m:%d\n", &m, m);
    ab = &m;
    printf("Address of ab: %p\nContent of ab: %d\n", ab, *ab);
    m = 34;
    printf("Address of ab: %p\nContent of ab: %d\n", ab, *ab);
    *ab = 7;
    printf("Address of m: %d\nValue of m:%d\n", &m, m);
    return 0;
}