#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int h, m, t;

	scanf("%d %d", &h, &m);
	scanf("%d", &t);

	m += t;
	if (m >= 60)
	{
		h += (m / 60);
		m %= 60;
		if (h >= 24)
			h -= 24;
	}
	printf("%d %d", h, m);
}