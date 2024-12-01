#include<stdio.h>
#include<stdlib.h>

void stringReverse(const char* str);
int main(void)
{
	char string[] = "hello world";
	printf("string: %s\nReverse string: ", string);
	stringReverse(string);
	printf("\n");
	system("pause");
	return 0;
}
void stringReverse(const char* str)
{
	if (*str == '\0')
	{
		return;
	}
	stringReverse(str + 1);
	printf("%c", *str);
}
