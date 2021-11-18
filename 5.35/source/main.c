#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(unsigned int x);
int main(void)
{
	int n;
	printf("計算第n位:");
	scanf_s("%d", &n);
	printf("(a)第n位=");
	printf("%u\n", fibonacci(n));
	printf("(b)電腦能顯示最大=");
	printf("%lld", fibonacci(UINT_MAX));
}

unsigned long long int fibonacci(unsigned int x)
{
	unsigned long long int a[2], i, ram;
	a[0] = 0, a[1] = 1;
	for (i = 2; i < x; i++)
	{
		ram = a[0] + a[1];
		a[0] = a[1];
		a[1] = ram;
		if (a[1] < a[0])
		{
			break;
		}
	}
	if (x == 1)
	{
		return 0;
	}
	else if (x == 2)
	{
		return 1;
	}
	else
	{
		return a[1];
	}


	/*unsigned long long int a[20000], i, n;
	a[0] = 0, a[1] = 1;
	for (i = 0; i < x; i++)
	{
		a[i+2] = a[i] + a[i+1];
	}
	return a[i-1];*/


	/*if (x == 1)
	{
		return 0;
	}
	else if(x==2)
	{
		return 1;
	}
	else
	{
		return fibonacci(x - 1) + fibonacci(x - 2);
	}*/
}
