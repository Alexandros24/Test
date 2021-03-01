#include <stdio.h>
#include <string.h>

int main()
{
    char str[10] = "gamisou ";
    char str2[10] = "gamiesai";
    strcat(str, str2); // strncat to idio me to strncpy(des string_Library) alla pairnei kai to \0 ara sizeof... -1 
    printf("%s\n", str);
    return 0;
}