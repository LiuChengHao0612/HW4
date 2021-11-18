#include <stdio.h>
#include <stdlib.h>

int function(int x, int y);
int main(void)
{
	int num1, num2;
	printf("Enter the base and exponent:");
	scanf_s("%d%d", &num1, &num2);
	printf("µª®×=%d", function(num1, num2));
	return 0;
}

 int function(int x, int y)
{
	if (y == 0)
	{
		return 1;
	}
	else 
	{
		return x*function(x, y-1);
	}
}