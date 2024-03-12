#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int x , k = 1;

	scanf("%d", &x);

	int i = 1;
	while (x > k) {
		i++;
		k += i;
	}

	int r = 1, p = i;
	for (int j = 1; j < i - (k - x); j++) {
		r++;
		p--;
	}

	if (i % 2 == 0)
		printf("%d/%d", r, p);
	else
		printf("%d/%d", p, r);
}