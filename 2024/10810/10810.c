#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int bas[101] = {0};
	int n, m, i, j, k;

	scanf("%d %d", &n, &m);
	for (int h = 1; h <= m; h++)
	{
		scanf("%d %d %d", &i, &j, &k);
		for (int l = i; l <= j; l++)
			bas[l] = k;
	}
	for (int k = 1; k <= n; k++)
		printf("%d ", bas[k]);
}