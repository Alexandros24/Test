#include <stdio.h>


int input(char str[]);
static int x = 30;


int main()
{
    char str[x];
    input(str);
    printf("%s", str);
    return 0;
}

int input(char str[]) // it's better to make a function than to use gets() or scanf() 
{
    char ch;
    int i = 0;
    while((ch = getchar()) != '\n' && i < x)
    {
        str[i++] = ch;
    }
    str[i] = '\0';
    return i;
}