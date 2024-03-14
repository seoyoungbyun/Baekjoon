#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;

	scanf("%d", &n);
	int min = 0;

	for (int i = n; i >= 1; i--) {
		int num = i;
		int sum = i;

		while (num != 0)
		{
			sum += num % 10;
			num /= 10;
		}

		if (sum == n)
			min = i;
	}

	printf("%d", min);
}