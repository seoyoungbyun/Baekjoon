#include <stdio.h>
int main(void)
{
	int i, t, a, b;

	scanf("%d", &t);

	for (i = 1; i <= t; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
}