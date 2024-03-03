#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int bas[101];
	int n, m, i, j;

	scanf("%d %d", &n, &m);
	for (int k = 1; k <= n; k++)
		bas[k] = k;

	for (int k = 0; k < m; k++) {
		scanf("%d %d", &i, &j);
		int tr = bas[j];
		bas[j] = bas[i];
		bas[i] = tr;
	}

	for (int k = 1; k <= n; k++)
		printf("%d ", bas[k]);
}