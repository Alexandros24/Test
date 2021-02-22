#include "iostream"

typedef __int64 bignum;

inline bool isprime(const bignum number)
{
	static __int64 i;
	if(!(number % 2))
		return false;
	for(i = 3; i*i <= number; i += 2)
		if(!(number % i))
			return false;
	return true;
}

int main()
{
	const bignum number = 600851475143;
	bignum max = 0;
	for(bignum i = 3; i*i <= number; i += 2)
	{
		if(!(number % i))
			if(isprime(i))
				max = i;
	}
	std::cout << max;
	return 0;
}