#include <stdio.h>
#include <stdlib.h>

int lcm(int x, int y);
int main(void)
{
	int num1, num2;
	printf("��J��Ӿ��:");
	scanf_s("%d%d", &num1,&num2);
	printf("�̤p������");
	printf("=%d", lcm(num1,num2));
}

int lcm(int x,int y)
{
	int i=1;
	while (i % x != 0 or i % y != 0)
	{
		i++;
	}
	return i;
}