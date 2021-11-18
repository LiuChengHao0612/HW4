#include <stdio.h>
#include <stdlib.h>

char changword(char word);
int main(void)
{
	char x;
	char character;
	printf("輸入英文字母=");
	scanf_s("%c", &character);
	x=changword(character);
	printf("轉換後英文=");
	printf("%c", x);
	return 0;
}
char changword(char word)
{
	if (word >= 'a' && word <= 'z')
	{
		word = word - 32;
	}
	else if (word >= 'A' && word <= 'Z')
	{
		word = word + 32;
	}
	return word;
}