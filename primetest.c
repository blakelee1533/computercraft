#include <stdio.h>
#include <math.h>


int FAIL[1000000];
int PASS[100000];
int j = 0;
int k = 0;	
int primes(int p)
{
	int i = 2;
	while (i < sqrt(p) && ((p%i) != 0))
	{
	i++;
	}
	if ((p%i) == 0 && p != i)
	{
		
		FAIL[j] = p;
		j++;
	}
	else if (sqrt(p) == i)
	{
		FAIL[j] = p;
		j++;
	}
	else
	{
		
		PASS[k] = p;
		k++;
	}
	return 0;
}

int main()
{
	int i = 0;
	for (i = 0; i < 1000000; i++)
	{
		primes(i);
	}
	for (i = 0; i < k; i++)
	{
		int printer = PASS[i];
		printf("%d ", printer);
	}
	return 0;
}