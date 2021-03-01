#include <stdio.h>

union syntax
{
    int a;
    char b;
};

//difference from structs is that unions share the same memory location
//size of the union is taken by the size of the largest member of it: so because integer is 4 bytes
//and character is 1 byte, union size will be 4 bytes
//we can access members of unions using pointers by using the arrow(->) operator

int main()
{
    union syntax temp;
    temp.a = 65;
    printf("%d, %c", temp.a, temp.b); //in ascii 65 is A
    union syntax *ptr = &temp;
    printf("\n%d %c", ptr->a, ptr->b);
    return 0;
}