/*
32-bit architecture
4 bytes at a time so
if a:
struct abc{
    char y; //is 1 byte
    char z; //is 1 byte
    int x;  //is 4 bytes
}temp;

is total 6 bytes so it would have to do 2 cycles, but with struct padding it will be as:


z|y|empty_space|empty_space|x(will take 4 bytes)|...

so total nubmer of bytes will be 1 + 1 + 2 + 4 = 8 but integer x will be on one cpu cycle so the compiler will understand

BUT 

the order will affect size. so if the integer was first the cpu stack would loook like this:

x|x|x|x|(cycle 1 stops)|y|z

so the total number of bytes will be 4 + 1 + 1 = 6 But two more empty spaces will have to be filled out for the cycle to end so total 
number will again be 8 BYTES.

and the same will happen if int is the middle and the total number of bytes will be 12

y|3 empty_spaces|integer x|z|3 empty_spaces 

so the total number of bytes will be: 1 + 3 + 4 + 1 + 3 = 12

*/
#include <stdio.h>
#include <stdlib.h>


int second();

struct abc{
    char y; //is 1 byte
    int x;  //is 4 bytes
    char z; //is 1 byte
}temp;

int main()
{
    second();
    printf("the base memory would be: %d", sizeof(temp));
}


/*
from padding memory will get wasted 
so just by writing #pragma pack(1) memory will be saved
BUT
CPU cycles will be wasted instead of memory
*/
#pragma pack(1)


struct edf{
    char w; //is 1 byte
    int k;  //is 4 bytes
    char f; //is 1 byte
}temp2;

int second()
{
    printf("with the proc package the memory allocates to: %d\n", sizeof(temp2));
    return 0;
}







