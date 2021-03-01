#include <stdio.h>
#include <stdlib.h>

//WE USE UNION AND NOT STRUCT FOR THE SAKE OF NOT LOSING MEMORY
typedef union {
    int a;
    char b;
    double c;
} data;

void main() {
    data arr[10];
    arr[0].a = 10;
    arr[1].b = 'a';
    arr[2].c = 10.12344;
    int len = sizeof(a)/sizeof(a[0]);
}