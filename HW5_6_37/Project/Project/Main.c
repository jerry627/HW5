#include<stdio.h>
#include<stdlib.h>

int recursiveMaxmum(int n[], int size);
int main(void)
{
	int n[5] = { 83,10,19,48,98 };
	printf("�}�C�����̤j�ȬO:%d\n", recursiveMaxmum(n, 5));
	system("pause");
	return 0;
}
int recursiveMaxmum(int n[], int size)
{
	if (size == 1)
		return n[0];
	int max = recursiveMaxmum(n, size - 1);
	return (n[size - 1] > max) ? n[size - 1] : max;
}
