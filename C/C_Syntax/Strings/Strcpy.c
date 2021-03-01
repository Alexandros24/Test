#include <stdio.h>
#include <string.h>

int main()
{
    char str[10] = "gamisou";
    char str2[10];

    //printf("%s\n", strcpy(str2, str)); 
    
    ///////////////////////////////////// strcpy won't check if the string pointed by str will fit in str; to avoid this we call strncpy function
    strncpy(str2, str, sizeof(str2));
    printf("%s\n", str2);
    return 0;
}