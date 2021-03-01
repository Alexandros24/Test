#include <stdio.h>
//#define x 2 only global scope
typedef int INT;
//enum and #define are similar, but enum can be used both in the local scope and in the start whereas #define
//can only be used at the start
INT main()
{
    enum INT {x = 10, k = 2};
    printf("%d %d", x, k);
    return 0;
}