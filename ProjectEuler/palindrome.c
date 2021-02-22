//problima 4
#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <stdbool.h>

//Find the largest palindrome made from the product of two 3-digit numbers.

bool palindrome(char*);
 
int main(){
	unsigned int b = 0, d = 0;
	char number[512];
	for(unsigned int i = 100; i < 1000; i++){
		for(unsigned int x = 100; x < 1000; x++){
			b = x * i;
			ulltoa(b, number, 10);
			//printf("%s\n", number);
			if(palindrome(number)){
				if(b > d)
					d = b;
			}
		}
	}	
	printf("Your number is: %u\n", d);
	system("PAUSE");
	return EXIT_SUCCESS;
}

bool palindrome(char *s1)
{
   __int64 l=strlen(s1);
   for(__int64 p=0;p<l;p++)
   {
        if(s1[p]!=s1[l-p-1])
           return false;;
   }
   return true;
}