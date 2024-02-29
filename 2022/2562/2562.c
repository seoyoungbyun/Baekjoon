#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int array[9];
	int i, count, big;
	big = 0;

	for (i = 0; i < 9; i++)
	{
		scanf("%d", &array[i]);
		if (array[i] > big)
		{
			big = array[i];
			count = i + 1;
		}
	}
	printf("%d\n%d", big, count);
}