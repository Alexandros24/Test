#include <stdio.h>

struct used
{
    char *mono;
    int abc;
};

int main()
{
    struct used program;
    program.mono = "working";
    program.abc = 32;
    struct used again;
    again.abc = program.abc - 2;
    printf("working if shown: %s, %d, %d", program.mono, program.abc, again.abc);    
    return 0;
}