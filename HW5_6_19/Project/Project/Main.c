#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int a, b;
	int total[11] = { 0 };
	srand(time(0));
	for (int i = 0; i < 36000; i++)
	{
		a = rand() % 6 + 1;
		b = rand() % 6 + 1;
		total[a + b - 2]++;
	}
	printf("�H���Y2�ӻ�l36000���A�U�`�I�ƥX�{������:\n");
	printf("2\t3\t4\t5\t6\t7\t8\t9\t10\t11\t12\n");
	for (int j = 0; j < 11; j++)
		printf("%d\t", total[j]);
	system("pause");
	return 0;
}