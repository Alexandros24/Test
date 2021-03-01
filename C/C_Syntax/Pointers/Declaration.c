//https://www.w3resource.com/c-programming-exercises/pointer/index.php
#include <stdio.h>

int main()
{
	int m = 10, n, o, *z;
	z = &m;
	printf("z = %p\n*z = %i\nm = %p\nn = %p\no = &p\nz = %p", z, *z, &m, &n, &o, &z);
	return 0;
}