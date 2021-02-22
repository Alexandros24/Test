//problima 1
#include <stdio.h>

int main()
{
    long sum = 0;
    for(int i = 1; i < 1000; i++) { // an einai pollaplasia tou 3 i tou 5
        if(i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    printf("%ld", sum);
    return 0;
}