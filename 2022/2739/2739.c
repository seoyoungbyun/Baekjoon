#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n;

	scanf("%d", &n);

	for (i = 1; i <= 9; i++)
		printf("%d * %d = %d\n", n, i, n * i);
}