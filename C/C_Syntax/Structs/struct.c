#include <stdio.h>

struct {
    char *pain;
    int a;
    int b;
}temp1, temp2;

int main()
{
    temp1.pain = "working";
    temp1.a = 2;
    temp2.pain = "working^2";
    printf("working if shown: \n %d, %s, %s", temp1.a, temp1.pain, temp2.pain);
    return 0;
}