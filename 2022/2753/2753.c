#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int y;

	scanf("%d", &y);

	if (y % 4 == 0)
		if (y % 100 != 0 || y % 400 == 0)
			printf("1");
		else
			printf("0");
	else
		printf("0");
}