#include <stdio.h>

int main()
{
    char a[10]; //declare string 
    //gets(a); //input user using gets() can't be done with scanf because scanf doesn't recognize white spaces
    //puts(a); //print string using puts() can be done with printf("%s", a);
    // get does not limit itself by 
    fscanf(stdin, "%9[^\n]s", a);
    puts(a);
    return 0;
}