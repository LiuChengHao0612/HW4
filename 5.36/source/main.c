#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, char A, char B, char C)
{
	if (n == 1) {
		//printf("\n1\n");
		printf("Move sheet from %c to %c\n", A, C);
		
	}
	else {
		//printf("\n%d\n", n);
		hanoi(n - 1, A, C, B);
		printf("-Move sheet from %c to %c\n", A, C);
		//anoi(1, A, B, C);
		hanoi(n - 1, B, A, C);
		//printf("\nwwwww%d\n", n);
		
	}
}

int main()
{
	int n;
	printf("½Ð¿é¤J½L¼Æ¡G");
	scanf_s("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0;
}

