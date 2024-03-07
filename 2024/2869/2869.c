#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b, v, dis = 0;
	int day = 1;

	scanf("%d %d %d", &a, &b, &v);
	dis = v - a;
	
	day = dis / (a - b);

	if (dis % (a - b) == 0)
		day++;
	else
		day += 2;

	printf("%d", day);
}