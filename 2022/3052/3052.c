#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, count = 0;
	int a[10];

	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
			if (a[i] % 42 == a[j] % 42)
				break;
		if (j == 10)
			count++;
	}
	printf("%d", count);
}