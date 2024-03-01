#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int check(int n0, int a1, int a0, int c)
{
	for (int n = n0; n <= 100; n++) {
		if (a1 * n + a0 > c * n)
			return 0;
	}

	return 1;
}
int main(void)
{
	int a1, a0, c, n0;

	scanf("%d %d", &a1, &a0);
	scanf("%d", &c);
	scanf("%d", &n0);

	printf("%d", check(n0, a1, a0, c));
}