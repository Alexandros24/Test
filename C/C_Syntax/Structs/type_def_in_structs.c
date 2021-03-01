#include <stdio.h>

typedef struct used // instead of writing struct used for variable initialization use typedef
{
    int abc;
    char *using;
}used ;

void main()
{
    //anti gia struct used temp1 grafoume...
    used temp1;
    temp1.using = "worked";
    printf("%s", temp1.using);
}